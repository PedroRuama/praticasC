/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Exercicio - Frequencia de caracteres
 *
 *  Instruções
 *  ----------
 *
 *	Este arquivo contém o código que auxiliará no desenvolvimento do
 *	exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== */

/// ---- ATENCAO: NAO ALTERAR DAQUI ---->
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* --- constantes, variaveis globais e registros ---- */
#define MAX 256
#define imprimeQuantidade "Caracteres: %d\n"
#define imprimeCaractereEspaco "'espaço': %d\n"
#define imprimeCaractere "'%c': %d\n"

typedef struct FrequenciaCatactere
{
    char caractere;
    int frequencia;
} FrequenciaCatactere;

/* --- prototipos das funcoes ---- */
// Conta e imprime a frequência de cada caractere
void contaFrequencia(int f[MAX], char frase[MAX], FrequenciaCatactere freC[]);
int tamanhoTotal(char texto[MAX]);
void ler_frase(char frase[], int n, FrequenciaCatactere freC[]);
int registrado(int caractere, FrequenciaCatactere freC[], int z);
void ordenar(FrequenciaCatactere freC[], int z);
int count(char s[], char caractere);

int main()
{
    char frase[MAX];
    int frequencia[MAX] = {0};
    FrequenciaCatactere freC[MAX] = {0};
    scanf("%[^\n]", frase);

    contaFrequencia(frequencia, frase, freC);

    return 0;
}
/// <---- ATE AQUI!!! ----

void contaFrequencia(int f[MAX], char frase[MAX], FrequenciaCatactere freC[])
{
    printf(imprimeQuantidade, tamanhoTotal(frase)-1);
    ler_frase(frase, tamanhoTotal(frase), freC);
}

void ler_frase(char frase[], int n, FrequenciaCatactere freC[])
{
    int ch, i = 0;
    int z = 0;

    while (frase[i] != '\0')
    {
        if (i < n)
        {
            ch = frase[i];
            if (registrado(ch, freC, z))
            {
                freC[z].caractere = ch;
                freC[z].frequencia = count(frase, ch);
                z++;
            }
            i++;
        }
    }
    ordenar(freC, z);
}

int tamanhoTotal(char texto[MAX])
{
    return strlen(texto);
}

int registrado(int caractere, FrequenciaCatactere freC[], int z)
{
    for (int i = 0; i < z; i++)
    {
        if (freC[i].caractere == caractere)
        {
            return 0;
        }
    }
    return 1;
}

int count(char s[], char caractere)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == caractere)
        {
            count++;
        }
    }
    return count;
}

void ordenar(FrequenciaCatactere freC[], int z)
{
    for (int i = 0; i < z - 1; i++)
    {
        for (int j = i + 1; j < z; j++)
        {
            if (freC[i].frequencia < freC[j].frequencia ||
                (freC[i].frequencia == freC[j].frequencia && freC[i].caractere > freC[j].caractere))
            {
                FrequenciaCatactere temp = freC[i];
                freC[i] = freC[j];
                freC[j] = temp;
            }
        }

    }

    for (int i = 0; i < z; i++)
    {
        if (freC[i].caractere == ' ')
        {
            printf(imprimeCaractereEspaco, freC[i].frequencia);
        }
        else
        {
            printf(imprimeCaractere, freC[i].caractere, freC[i].frequencia);
        }
    }
}