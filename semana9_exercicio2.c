#include <stdio.h>

int main() {
    int numero, reverso = 0, resto;

    
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    
    do {
        
        resto = numero % 10;
       
        reverso = reverso * 10 + resto;
        
        numero = numero / 10;
    } while (numero != 0);

    
    printf("O número revertido é: %d\n", reverso);

    return 0;
}
