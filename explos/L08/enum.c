#include <stdio.h>

enum Mes {jan = 1, fev, mar, abr, mai, jun, 
          jul, ago, set, out, nov, dez};

typedef enum Mes meses;

int main () 
{
  	//enum Mes mes_aniversario;
	meses mes_aniversario;

  	mes_aniversario = fev;

  	printf ("O meu mês de aniversário é %d!\n\n", mes_aniversario);
	printf ("Informe o seu mês de aniversário: ");
	scanf("%d", &mes_aniversario);

	switch (mes_aniversario)
	{
		case jan:
			printf("Mes %d - janeiro", mes_aniversario);
			break;	
		case fev:
			printf("Mes %d - fevereiro", mes_aniversario);
			break;
		case mar:
			printf("Mes %d - marco", mes_aniversario);
			break;
		case abr:
			printf("Mes %d - abril", mes_aniversario);
			break;
		case mai:
			printf("Mes %d - maio", mes_aniversario);
			break;
		case jun:
			printf("Mes %d - junho", mes_aniversario);
			break;
		case jul:
			printf("Mes %d - julho", mes_aniversario);
			break;
		case ago:
			printf("Mes %d - agosto", mes_aniversario);
			break;
		case set:
			printf("Mes %d - setembro", mes_aniversario);
			break;
		case out:
			printf("Mes %d - outubro", mes_aniversario);
			break;
		case nov:
			printf("Mes %d - novembro", mes_aniversario);
			break;
		case dez:
			printf("Mes %d - dezembro", mes_aniversario);
			break;
	}

	printf("\n\n");

	return (0);
}
