#include <stdio.h>
#include <math.h>
int main(){
    int x, y;
    int /*<-- Vermelho*/mult;


    printf("Introduza um valor : ");
    scanf(" %d", &x);
    printf("Introduza outro valor : ");
    scanf(" %d", &y);
    
    mult = x * y;
    printf("X vezes Y é igual a : %d", mult);
    return 0;
}