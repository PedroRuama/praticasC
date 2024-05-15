#include <stdio.h>

int main() {
   
    int idade;
    double altura, peso;
    char genero, gestante, deficiencia, crianca_de_colo;

    
    scanf("%d %lf %lf", &idade, &altura, &peso);
    scanf(" %c %c %c %c", &genero, &gestante, &deficiencia, &crianca_de_colo);

    double imc = peso / (altura * altura);

    
    char motivo_idade = '-';
    char motivo_gestante = '-';
    char motivo_deficiencia = '-';
    char motivo_crianca_de_colo = '-';
    char motivo_obesidade = '-';

    if (idade >= 60) {
        motivo_idade = 'I';
    }
    if (genero == 'F' && gestante == 'S') {
        motivo_gestante = 'G';
    }
    if (deficiencia == 'S') {
        motivo_deficiencia = 'D';
    }
    if (crianca_de_colo == 'S') {
        motivo_crianca_de_colo = 'C';
    }
    if (imc >= 30) {
        motivo_obesidade = 'O';
    }

    if (motivo_idade == '-' && motivo_gestante == '-' && motivo_deficiencia == '-' && motivo_crianca_de_colo == '-' && motivo_obesidade == '-') {
        printf("Atendimento comum\n");
    } else {
        printf("Atendimento preferencial, motivos: %c%c%c%c%c\n", motivo_idade, motivo_gestante, motivo_deficiencia, motivo_crianca_de_colo, motivo_obesidade);
    }

    return 0;
}