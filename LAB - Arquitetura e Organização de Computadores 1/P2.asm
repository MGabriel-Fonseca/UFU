.data
prompt: .asciiz "Digite uma frase para converter para minúsculas: "
texto: .space 256

.text
main:
  # Exibe o prompt para o usuário
  li $v0, 4
  la $a0, prompt
  syscall

  # Leitura da string do usuário
  li $v0, 8
  li $a1, 256
  la $a0, texto
  syscall

  # Loop para converter cada caractere
  li $v0, 4
  li $t0, 0
loop:
    # Carrega o caractere na variável $t1
    lb $t1, texto($t0)

    # Sai do loop se o caractere for nulo
    beqz $t1, exit

    # Verifica se o caractere é uma letra maiúscula
    li $t2, 'A'
    blt $t1, $t2, not_uppercase
    li $t2, 'Z'
    bgt $t1, $t2, not_uppercase

    # Converte o caractere para minúscula (xor com 0x20)
    addi $t1, $t1, 32
not_uppercase:
    
    # Armazena o caractere convertido na string
    sb $t1, texto($t0)

    # Incrementa o índice do caractere
    addi $t0, $t0, 1

    # Pula para o próximo caractere
    j loop

exit:
  # Exibe a string convertida
  li $v0, 4
  la $a0, texto
  syscall

  # Finaliza o programa
  li $v0, 10
  syscall
