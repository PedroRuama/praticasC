typedef struct FRUTAS
{

    int BANANA;

    int UVA;

    int MELANCIA;

} FRUTAS;

int main()
{
    int A = 6, B =8;
    FRUTAS FRUTINHAS = {0, 0, 0};

    for (int i = 0; i < A; i++)
    {

        FRUTINHAS.BANANA += A % B;

        FRUTINHAS.UVA += FRUTINHAS.BANANA - B;

        B += i;
    }

    if (FRUTINHAS.UVA < 0)

        FRUTINHAS.MELANCIA = FRUTINHAS.BANANA * 2 + FRUTINHAS.UVA;

    else
        FRUTINHAS.MELANCIA = FRUTINHAS.BANANA * 2 - FRUTINHAS.UVA;

    printf("%d", FRUTINHAS.BANANA + FRUTINHAS.UVA + FRUTINHAS.MELANCIA);
}