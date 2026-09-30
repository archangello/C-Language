#include <stdio.h>
int main(){
    int x;
    printf("Digite um valor : ");
    scanf("%d", &x);
    if(x != 0){
        printf("Valor diferente de 0.\n");
    }
    else{
        printf("Valor igual a 0.\n");
    }
    printf("Valor : %d\n", x);
    return 0;
}