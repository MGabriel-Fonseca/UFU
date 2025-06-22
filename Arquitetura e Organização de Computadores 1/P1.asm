.data
  msg: .asciiz "professor claudio"

.text
  .globl main

main:
  # Carrega o endereço da string "msg" no registrador $a0.
  la $a0, msg

  # Chama a função string_length para calcular o comprimento da string.
  jal string_length
  
  li $v0, 1  # $v0 é usado para especificar o código da syscall. 1 é o código para imprimir um inteiro.

  # Move o valor do comprimento da string (armazenado em $t0) para o registrador $a0.
  move $a0, $t0

  # Executa a syscall para imprimir o comprimento da string na console.
  syscall

  # Prepara a syscall para finalizar o programa.
  li $v0, 10  # $v0 com 10 indica a syscall para finalizar o programa.

  # Executa a syscall para encerrar o programa.
  syscall

string_length:
  # Move o endereço da string (armazenado em $a0) para o registrador temporário $t1.
  move $t1, $a0

loop:
  lb $t2, ($t1)   # Carrega um byte da memória no endereço ($t1)

  # Verifica se o byte carregado é igual a zero 
  # Se for zero, significa que o final da string foi atingido.
  beqz $t2, exit 

  # Incrementa o valor do registrador $t1 para apontar para o próximo byte da string.
  addi $t1, $t1, 1

  # Pula de volta para a label "loop" para continuar a iteração.
  j loop        

exit:
  # Calcula o comprimento da string subtraindo o endereço inicial (armazenado em $a0) do endereço final (armazenado em $t1).
  sub $t0, $t1, $a0

  # Retorna da função string_length com o comprimento da string no registrador $t0.
  jr $ra 
