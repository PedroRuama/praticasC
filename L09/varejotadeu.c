#include <stdio.h>

#define SemREGULAR "Nenhum cliente regular.\n"
#define CADASTRO "Compra cadastrada!\n"
#define INVALIDA "Operacao invalida!\n"

typedef struct compra
{
    double valor;
    long cpf;
    int qntProdutos;
} Compra;

typedef struct cliente
{
    long cpf;
    int retornos;
} Cliente;

void cadastrarCompra(Compra compras[], Cliente clientes[], double valor, long cpf, int qnt);
void cadastrarCliente(Cliente clientes[], long cpf);
int mediaProdutos(Compra compras[]);
double mediaGasto(Compra compras[]);
double mediaPrecoProduto(Compra compras[]);
void clientesRegulares(Cliente clientes[]);

int compra_count = 0;

int main()
{
    int op;
    Compra compras[100];
    Cliente clientes[100];
    double valor;
    long int cpf;
    int qnt;

    for (int i = 0; i < 100; i++)
    {
        compras[i].valor = 0.0;
        compras[i].cpf = 0;
        compras[i].qntProdutos = 0;
        clientes[i].retornos = 0;
        clientes[i].cpf = 0;
    }

    do
    {
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            return (0);
        case 1:
            scanf("%lf", &valor);
            scanf("%ld", &cpf);
            scanf("%d", &qnt);
            cadastrarCompra(compras, clientes, valor, cpf, qnt);
            cadastrarCliente(clientes, cpf);
            break;
        case 2:
            printf("%d\n", mediaProdutos(compras));
            break;
        case 3:
            printf("R$%.2lf.\n", mediaGasto(compras));
            break;
        case 4:
            printf("R$%.2lf.\n", mediaPrecoProduto(compras));
            break;
        case 5:
            clientesRegulares(clientes);
            break;
        default:
            printf(INVALIDA);
            break;
        }

    } while (op != 0);

    return (0);
}

void cadastrarCompra(Compra compras[], Cliente clientes[], double valor, long cpf, int qnt)
{
    compras[compra_count].valor = valor;
    compras[compra_count].qntProdutos = qnt;
    compras[compra_count].cpf = cpf;

    int cliente_existente = 0;
    for (int i = 0; i < 100; i++)
    {
        if (clientes[i].cpf == cpf)
        {
            clientes[i].retornos += 1;
            cliente_existente = 1;
            break;
        }
    }

    if (!cliente_existente)
    {
        cadastrarCliente(clientes, cpf);
    }

    compra_count++;
    printf(CADASTRO);
}

void cadastrarCliente(Cliente clientes[], long cpf)
{
    for (int i = 0; i < 100; i++)
    {
        if (clientes[i].cpf == 0)
        {
            clientes[i].cpf = cpf;
            clientes[i].retornos = 1;
            break;
        }
    }
}

int mediaProdutos(Compra compras[])
{
    int totalP = 0;
    for (int i = 0; i < compra_count; i++)
    {
        totalP += compras[i].qntProdutos;
    }
    return compra_count > 0 ? totalP / compra_count : 0;
}

double mediaGasto(Compra compras[])
{
    double totalG = 0;
    for (int i = 0; i < compra_count; i++)
    {
        totalG += compras[i].valor;
    }
    return compra_count > 0 ? totalG / compra_count : 0;
}

double mediaPrecoProduto(Compra compras[])
{
    double totalPs = 0;
    int totalProdutos = 0;
    for (int i = 0; i < compra_count; i++)
    {
        totalPs += compras[i].valor;
        totalProdutos += compras[i].qntProdutos;
    }
    return totalProdutos > 0 ? totalPs / totalProdutos : 0;
}

void clientesRegulares(Cliente clientes[])
{
    int exstClientRegular = 0;
    int nClient = 1;
    for (int i = 0; i < 100; i++)
    {
        if (clientes[i].retornos >= 3 && clientes[i].cpf != 0)
        {
            exstClientRegular = 1;
            printf("%d - %ld\n", nClient++, clientes[i].cpf);
        }
    }

    if (!exstClientRegular)
    {
        printf(SemREGULAR);
    }
}
