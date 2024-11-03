.data
    pi: .float 3.141592             
    numero_um: .float 1.0            
    x: .float 0.0                    
    divisor: .float 180.0            
    precisao: .float 0.00001         
    mensagem_resultado: .asciiz "Valor do seno:  "   
    pedir_numero: .asciiz "Digite o valor do angulo em graus: "  

.text
    main:
        li      $v0, 4              
        la      $a0, pedir_numero    
        syscall                    

        li      $v0, 6               # ler um float
        syscall                      # Chamar a função ler o ângulo
        mov.s   $f0, $f0             # Mover o valor do ângulo para $f0
        swc1    $f0, x               # Armazenar o valor do ângulo em x

        lwc1    $f0, x               
        lwc1    $f1, pi              
        lwc1    $f10, divisor        
        mul.s   $f0, $f0, $f1        # Multiplicar o ângulo por pi para obter radianos
        div.s   $f0, $f0, $f10       # Converter de graus para radianos
        j       senox                

    senox:
        mtc1    $zero, $f5           # Limpar $f5
        add.s   $f2, $f0, $f5        # Inicializar o resultado com o valor do ângulo
        lwc1    $f7, precisao        
        li      $t0, 2               
        lwc1    $f11, numero_um      

    loop:
        mul.s   $f4, $f0, $f0        # Calcular x^2
        mtc1    $t0, $f3             # Carregar o fator de x^2
        div.s   $f4, $f4, $f3        # Dividir
        mul.s   $f4, $f4, $f2        
        mul.s   $f4, $f4, $f1        # usa sinal de pi
        mul.s   $f4, $f4, $f11       
        sub.s   $f2, $f2, $f4        # Subtrair do resultado 
        addi    $t0, $t0, 2          
        neg     $t1, $t1             # Alternar o sinal de pi
        c.lt.s  $f2, $f7             # Comparar o resultado com a precisão 
        bc1t    loop_fim             # Se menor que a precisão, sair do loop
        j       loop                 # volta para o comeco do loop

    loop_fim:
        li      $v0, 4               
        la      $a0, mensagem_resultado  
        syscall                      # Chamar a função do sistema para imprimir a mensagem

        li      $v0, 2               
        mov.s   $f12, $f0            
        syscall                      # Chamar a função do sistema para imprimir o seno

        li      $v0, 10              
        syscall                      