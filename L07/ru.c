
int main()
{
    int linhas, colunas, ilha[50][50] = {0}, perimetro =0;
    int i, z;

    scanf("%d %d", &linhas, &colunas);

    for (i = 0; i < linhas; i++)
    {
        for (z = 0; z < colunas; z++)
        {
            scanf("%d", &ilha[i][z]);
        }
    };


 return 0;   
}