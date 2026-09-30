#include <stdio.h>
#include <stdlib.h>
int loja(){
    int id;
    int id_correto = 0;

    putchar("\n");
    printf("1 - item1   2 - item2\n");
    printf("3 - item3   4 - item4\n");
    printf("5 - item5   6 - item6\n");
    printf("7 - item7   8 - item8\n");

    while(id_correto == 0)
    {
        printf("Digite o ID do produto desejado : ");
        scanf("%d", &id);

        if (0 < id < 9)
        {
            id_correto++;
        }
        else
        {
            printf("ID invalido.");
        }
    }
    return id;
}
int main(){
    int lencart;
    int indice = 0;
    printf("Digite o tamanho do seu carrinho : ");
    scanf("%d", &lencart);
    int cart[lencart];

    for (indice = 0; indice < lencart; indice++)
    {
        cart[indice] = loja();
    }
    printf("Carrinho : %d\n", cart);
}