.data
    pi: .float 3.141592             
    numero_um: .float 1.0          
    x: .float 0.0                   
    divisor: .float 180.0           
    precisao: .float 0.00001        
    mensagem_resultado: .asciiz "Valor do cosseno:  "   
    pedir_numero: .asciiz "Digite o valor do angulo em graus: "   

.text
    main:
        li      $v0, 4              # Pergunta angulo
        la      $a0, pedir_numero   
        syscall

        li      $v0, 6              # le angulo
        syscall
        mov.s   $f0, $f0            # Move o valor do angulo para $f0
        swc1    $f0, x              # Armazena o valor do angulo

        lwc1    $f0, x              
        lwc1    $f1, pi             
        lwc1    $f10, divisor       
        mul.s   $f0, $f0, $f1       # Calcula o ângulo em radianos
        div.s   $f0, $f0, $f10      # Converte graus para radianos
        j       cossx               

    cossx:
        mtc1    $zero, $f5          
        add.s   $f2, $f0, $f5       # Inicializa o resultado
        lwc1    $f7, precisao       # Carrega a precisão
        li      $t0, 2              # Inicializa o fator de x^2
        lwc1    $f11, numero_um    

    loop:
        mul.s   $f4, $f0, $f0       # Calcula x^2
        mtc1    $t0, $f3            # Carrega o fator de x^2
        div.s   $f4, $f4, $f3       # Divide 
        mul.s   $f4, $f4, $f2       
        mul.s   $f4, $f4, $f1       # usa sinal pi
        mul.s   $f4, $f4, $f11      
        sub.s   $f2, $f2, $f4       # Subtrai do resultado
        addi    $t0, $t0, 2         
        neg     $t1, $t1            # Alterna o sinal
        c.lt.s  $f2, $f7            # Compara com a precisão
        bc1t    loop_fim            # Se menor que a precisão, termina
        j       loop                # Volta ao loop

    loop_fim:
        li      $v0, 4              # Imprime a mensagem de resultado
        la      $a0, mensagem_resultado
        syscall

        li      $v0, 2              # Imprime o valor do cosseno
        mov.s   $f12, $f0
        syscall

        li      $v0, 10             # Termina o programa
        syscall