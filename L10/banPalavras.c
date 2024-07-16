#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TEXTOTOTAL 10000
#define MAXBANIDAS 25
#define MAXPALAVRA 50

typedef struct {
    char palavra[MAXPALAVRA];
} Palavras;


int obterListaBanidas(Palavras banidas[]);
int palavraPermitida(char palavra[], Palavras banidas[], int numBanidas);
void constroiTextoFinal(char textoFinal[], Palavras banidas[], int numBanidas);

int main() {
    Palavras banidas[MAXBANIDAS];
    char textoFinal[TEXTOTOTAL] = "";
    int numBanidas;

    numBanidas = obterListaBanidas(banidas);
    constroiTextoFinal(textoFinal, banidas, numBanidas);

    puts(textoFinal);

    return 0;
}

int obterListaBanidas(Palavras banidas[]) {
    int numBanidas, i;
    scanf("%d\n", &numBanidas);

    for (i = 0; i < numBanidas; i++) {
        fgets(banidas[i].palavra, MAXPALAVRA, stdin);
        // Remover o '\n' do final da palavra
        size_t len = strlen(banidas[i].palavra);
        if (len > 0 && banidas[i].palavra[len - 1] == '\n') {
            banidas[i].palavra[len - 1] = '\0';
        }
    }

    return numBanidas;
}

int palavraPermitida(char palavra[], Palavras banidas[], int numBanidas) {
    for (int i = 0; i < numBanidas; i++) {
        if (strcmp(palavra, banidas[i].palavra) == 0) {
            return 0;
        }
    }
    return 1;
}

void constroiTextoFinal(char textoFinal[], Palavras banidas[], int numBanidas) {
    char palavra[MAXPALAVRA];
    char c;
    int i = 0;

    while ((c = getchar()) != '.') {
        if (isspace(c) || c == ',' || c == '!' || c == '?' || c == '.' || c == ';' || c == ':') {
            if (i > 0) {
                palavra[i] = '\0';
                if (palavraPermitida(palavra, banidas, numBanidas)) {
                    strcat(textoFinal, palavra);
                } else {
                    for (int j = 0; j < i; j++) {
                        strcat(textoFinal, "@");
                    }
                }
                i = 0;
            }
            strncat(textoFinal, &c, 1);
        } else {
            palavra[i++] = c;
        }
    }

  
    if (i > 0) {
        palavra[i] = '\0';
        if (palavraPermitida(palavra, banidas, numBanidas)) {
            strcat(textoFinal, palavra);
        } else {
            for (int j = 0; j < i; j++) {
                strcat(textoFinal, "@");
            }
        }
    }
}

