#include <stdio.h>

int main()
{
    int linhas, colunas, ilha[50][50] = {0}, perimetro=0;
    int i, z;

    scanf("%d %d", &linhas, &colunas);

    for (i = 0; i < linhas; i++)
    {
        for (z = 0; z < colunas; z++)
        {
            scanf(" %d", &ilha[i][z]);
        }
    };
    

    for (i = 0; i < linhas; i++)
    {
        for (z = 0; z < colunas; z++)
        {
            if(ilha[i][z] != 1){   
                                                                                            
                perimetro += 0;

            }else{                                                                                         
                if (ilha[i][z -1] != 1 && ilha[i][z+1] != 1 && (ilha[i-1][z] != 1 || ilha[i+1][z] != 1) || ilha[i-1][z] != 1 && ilha[i+1][z] != 1 && (ilha[i][z-1] != 1 || ilha[i][z+1] != 1))  
                {                                                                                          
                   //     0           0  
                   //   0 1 0       0 1
                   //                 0      

                    perimetro += 3;                                                  
                }else if (ilha[i][z -1] == 1 && ilha[i][z+1]==1 && ilha[i-1][z] == 1 && ilha[i+1][z] == 1)
                {
                    //    1
                    //  1 1 1
                    //    1

                    perimetro +=0;
                } else if (ilha[i][z-1] == 1 && ilha[i][z+1]==1 && (ilha[i-1][z] != 1 && ilha[i+1][z] == 1 || ilha[i-1][z] == 1 && ilha[i+1][z] != 1) || ilha[i-1][z] == 1 && ilha[i+1][z]==1 && (ilha[i][z-1] != 1 && ilha[i][z+1] == 1 || ilha[i][z-1] == 1 && ilha[i][z+1] != 1))
                {
                    //    0           1
                    //  1 1 1       0 1 1
                    //    1           1
                    perimetro += 1;
                }
                
                
                
                
                else if (ilha[i][z -1] != 1 && ilha[i][z+1] != 1 && ilha[i-1][z] == 1 && ilha[i+1][z] == 1 || ilha[i][z -1] == 1 && ilha[i][z+1]==1 && ilha[i-1][z] != 1 && ilha[i+1][z] != 1 )
                {
                    //    1           0
                    //  0 1 0       1 1 1
                    //    1           0
                    perimetro +=2;
                }else if (ilha[i][z-1] != 1 && ilha[i-1][z] != 1&& ilha[i+1][z] == 1 && ilha[i][z+1] == 1 || ilha[i][z+1] != 1 && ilha[i+1][z] != 1 && ilha[i-1][z] == 1 && ilha[i][z-1] == 1 || ilha[i][z+1] == 1 && ilha[i+1][z] != 1 && ilha[i-1][z] == 1 && ilha[i][z-1] != 1 || ilha[i][z+1] != 1 && ilha[i+1][z]==1 && ilha[i-1][z] != 1 && ilha[i][z-1] == 1)
                {
                    //    0           1
                    //  0 1 1       1 1 0
                    //    1           0
                    perimetro +=2;
                } else if (ilha[i][z-1] != 1 && ilha[i-1][z]== 1 && ilha[i+1][z] != 1 && ilha[i][z+1] != 1)
                {
                    //    0           1
                    //  0 1 0       0 1 0
                    //    1           0
                    perimetro +=3;
                }
                 else if (ilha[i][z-1] == 1 && ilha[i-1][z] != 1 && ilha[i+1][z] != 1 && ilha[i][z+1] != 1)
                {
                    //    0           1
                    //  0 1 0       0 1 0
                    //    1           0
                    perimetro +=3;
                }
                 else if (ilha[i][z-1] != 1 && ilha[i-1][z] != 1 && ilha[i+1][z] == 1 && ilha[i][z+1] != 1)
                {
                    //    0           1
                    //  0 1 0       0 1 0
                    //    1           0
                    perimetro +=3;
                }
                 else if (ilha[i][z-1] != 1 && ilha[i-1][z] != 1 && ilha[i+1][z] != 1 && ilha[i][z+1] == 1)
                {
                    //    0           1
                    //  0 1 0       0 1 0
                    //    1           0
                    perimetro +=3;
                }
                

                
            }
        }

    }

    printf("%d", perimetro);
    return 0;
};
