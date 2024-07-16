#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX      101
#define SUCESSO  "Operação efetuada com sucesso!\n"
#define ERRO     "Erro\n"
#define INVALIDA "Opção inválida\n"

int adicionar(char str[], char c);
int remover(char str[], char c);
void ordenar(char str[]);
void inverter(char str[]);
int ehPalindromo(char str[]);
void imprimir(char str[]);

int main() {
    int op;
    char c;
    char str[MAX];

    scanf("%[^\n]", str);

    while (1) {
        scanf("%d", &op);

        switch(op) {
            case 0:
                return 0;

            case 1:
                scanf(" %c", &c);
                if (adicionar(str, c))
                    printf(SUCESSO);
                else
                    printf(ERRO);
                break;

            case 2:
                scanf(" %c", &c);
                if (remover(str, c))
                    printf(SUCESSO);
                else
                    printf(ERRO);
                break;

            case 3:
                ordenar(str);
                break;

            case 4:
                inverter(str);
                break;

            case 5:
                printf("%d\n", ehPalindromo(str));
                break;

            case 6:
                imprimir(str);
                break;

            default:
                printf(INVALIDA);
        }
    }

    return 0;
}

int adicionar(char str[], char c) {
    int len = strlen(str);
    if (len < MAX - 1) {
        str[len] = c;
        str[len + 1] = '\0';
        return 1;
    }
    return 0;
}

int remover(char str[], char c) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (tolower(str[i]) == tolower(c)) {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            return 1;
        }
    }
    return 0;
}

void ordenar(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void inverter(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int ehPalindromo(char str[]) {
    int len = strlen(str);
    char cleanStr[len + 1];
    int j = 0;

   
    for (int i = 0; i < len; i++) {
        if (isalnum(str[i])) {
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';  

    int cleanLen = strlen(cleanStr);
    for (int i = 0; i < cleanLen / 2; i++) {
        if (cleanStr[i] != cleanStr[cleanLen - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void imprimir(char str[]) {
    printf("%s\n", str);
}
