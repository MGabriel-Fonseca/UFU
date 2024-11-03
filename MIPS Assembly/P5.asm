.data
array: .word 5, 6, 4, 7, 3, 2, 1
newline: .asciiz "\n"
space: .asciiz " "

.text
.globl main

main:
    la $t0, array           #coloca o array no registrador
    addi $a0, $t0, 0        # Set argument 1 to the array.
    addi $a1, $zero, 0      #low = 0
    addi $a2, $zero, 7      #high = 7
    jal quicksort
    jal print_array

    li $v0, 10
    syscall

print_array:
    addi $t0, $zero, 0      # Initialize $t0 to 0 (index i)
loop:
    bge $t0, 7, end_print   # If i >= 7
    la $a0, array           #carrega array no $a0
    sll $t1, $t0, 2         #calculo descolamento
    add $a0, $a0, $t1
    lw $a1, 0($a0)          #carrega valor no vetor array[i]
    li $v0, 1
    move $a0, $a1           #mover valor q vai ser printado
    syscall                 #syscall do print
    li $v0, 4
    la $a0, space           #carrega o epsaco
    syscall                 #print do espaco
    addi $t0, $t0, 1        #i++
    j loop                  #recursão

end_print:
    li $v0, 4
    la $a0, newline
    syscall
    jr $ra                  #retorno

swap:
    addi $sp, $sp, -12      #Espaço na pilha
    sw $a0, 0($sp)
    sw $a1, 4($sp)
    sw $a2, 8($sp)

    sll $t1, $a1, 2         # t1 = 4 * a
    add $t1, $a0, $t1       # t1 = arr + 4 * a
    lw $s3, 0($t1)          # s3 = array[a]

    sll $t2, $a2, 2         #deslocamento
    add $t2, $a0, $t2
    lw $s4, 0($t2)

    sw $s4, 0($t1)          #v[a] = v[b]
    sw $s3, 0($t2)          #v[b] = s3

    addi $sp, $sp, 12       #resturaçao da pilha
    jr $ra

partition:
    addi $sp, $sp, -16      #4 espacos

    sw $a0, 0($sp)
    sw $a1, 4($sp)
    sw $a2, 8($sp)
    sw $ra, 12($sp)

    move $s1, $a1           #s1 = low
    move $s2, $a2           #s2 = high

    sll $t1, $s2, 2         #t1 = 4 * high
    add $t1, $a0, $t1
    lw $t2, 0($t1)          #pivo

    addi $t3, $s1, -1       #t3, i = low - 1
    move $t4, $s1           #t4, j = low
    addi $t5, $s2, -1       #t5 = high - 1

forloop:
    slt $t6, $t5, $t4       # t6 = 1 se j > high - 1 \\ t6 = 0 se j <= high - 1
    bne $t6, $zero, endfor  # se t6 = 1, endfor//Funcao

    sll $t1, $t4, 2         #deslocamento
    add $t1, $t1, $a0       #t1 = v + 4 * j
    lw $t7, 0($t1)          #t7 = v[j]

    slt $t8, $t2, $t7       # t8 = 1 if pivot < arr[j] \\ t8 = 0 se arr[j] <= pivot
    bne $t8, $zero, endfif  #t8 = 1, endfif //funcao
    addi $t3, $t3, 1        # i = i + 1

    move $a1, $t3           #a1 = i
    move $a2, $t4           #a2 = j
    jal swap                #swap(arr, i, j)

    addi $t4, $t4, 1        # j++
    j forloop

endfif:
    addi $t4, $t4, 1        # j++
    j forloop

endfor:
    addi $a1, $t3, 1        #a1 = i + 1
    move $a2, $s2           #a2 = high
    add $v0, $zero, $a1     #v0 = i + 1 retorno i + 1
    jal swap                # swap(arr, i + 1, high)

    lw $ra, 12($sp)         #enderecco
    addi $sp, $sp, 16       #rearanja a pilha
    jr $ra

quicksort:
    addi $sp, $sp, -16      #4 espacos

    sw $a0, 0($sp)
    sw $a1, 4($sp)          #low
    sw $a2, 8($sp)          #high
    sw $ra, 12($sp)         #endereco do retorno

    move $t0, $a2           #high

    slt $t1, $a1, $t0       #t1 = 1 se low < high, else 0
    beq $t1, $zero, endif   # se low >= high //endif//Funcao

    jal partition           #particao
    move $s0, $v0           #pivo, s0 = v0

    lw $a1, 4($sp)          #a1 = low
    addi $a2, $s0, -1       #a2 = pivo - 1
    jal quicksort

    addi $a1, $s0, 1        #a1 = pivo + 1
    lw $a2, 8($sp)          #a2 = high
    jal quicksort

endif:
#restauracao dos valores da pilha
    lw $a0, 0($sp)
    lw $a1, 4($sp)
    lw $a2, 8($sp)
    lw $ra, 12($sp)
    addi $sp, $sp, 16
    jr $ra
