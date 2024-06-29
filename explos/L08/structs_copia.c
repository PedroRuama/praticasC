#include <stdio.h>

// Define o tipo nota (float)
typedef float nota;

// Define o registro aluno com os campos: ra, notas das provas p1 e p2 e media
struct aluno { 
	int   ra;
	nota nota_p1, nota_p2;
	float media; 
};


int main ()
{
	struct aluno aluno1, aluno2;

	printf ("Digite o RA do aluno: ");
	scanf ("%d", &aluno1.ra);

	printf ("Digite a nota da P1: ");
	scanf ("%f", &aluno1.nota_p1);

	printf ("Digite a nota da P2: ");
	scanf ("%f", &aluno1.nota_p2);

  	aluno1.media = (aluno1.nota_p1 + aluno1.nota_p2)/2;

	aluno2 = aluno1;  // copia os dados do registro aluno1 no registro aluno2

	// imprime os dados do aluno2
	printf ("\nO aluno %d tirou média %.2f\n", aluno2.ra, aluno2.media);
	printf ("Notas: P1 = %.2f, P2 = %.2f\n\n", aluno2.nota_p1, aluno2.nota_p2);

	return (0);
}
