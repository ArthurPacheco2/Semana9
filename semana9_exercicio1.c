#include <stdio.h>
#include <string.h>

int main() {
    char senha_correta[] = "Senha@123";
    char senha_digitada[20];
    int tentativas = 0;

    do {
        printf("Digite a senha: ");
        scanf("%s", senha_digitada);

        
        if (strcmp(senha_digitada, senha_correta) == 0) {
            printf("Acesso permitido!\n");
            break; 
        } else {
            printf("Senha incorreta. Tente novamente.\n");
            tentativas++;
        }
    } while (tentativas < 3);

    if (tentativas >= 3) {
        printf("Acesso revogado.\n");
    }

    return 0;
}
