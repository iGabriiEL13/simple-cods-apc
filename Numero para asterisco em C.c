#include <stdio.h>
#include <conio.h> // Apenas para Windows

int main() {
    int numero = 0, digitado;
    
    printf("Digite um numero: ");
    
    //todo numero diferente de 0 é TRUE
    while (1) { 
        digitado = getch(); // Captura o caractere sem exibir na tela
        
        if (digitado == 13){ // Se pressionar ENTER, encerra a entrada
            break;
        }
         if (digitado >= '0' && digitado <= '9') { // Se for número
            printf("*"); // Mostra '*' na tela
            numero = numero * 10 + (digitado - '0'); // Converte char para int
        }
    }

    printf("\nNumero armazenado: %d\n", numero); // Apenas para teste, se for colocar no código é recomendavel que tire

    return 0;
}
