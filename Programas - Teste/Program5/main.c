#include <stdio.h>
#include <stdlib.h>

int size_matriz1[] = {0, 0};
int size_matriz2[] = {0, 0};

int matriz1_x = 0;
int matriz1_y = 0;
int matriz2_x = 0;
int matriz2_y = 0;

char operator = ' ';

void prompt_user(int mode){
    switch (mode){
        case 1:
            printf("Digite as dimensoes de sua matriz : ");
            scanf("%d %d", &matriz1_x, &matriz1_y);
            printf("Dimensoes : %d %d\n", matriz1_x, matriz1_y);
            break;
        case 2:
            printf("Digite as dimensoes de sua matriz : ");
            scanf("%d %d", &matriz2_x, &matriz2_y);
            printf("Dimensoes : %d ; %d\n", matriz2_x, matriz2_y);
            break;
        case 3:
            printf("Digite uma operacao (+ - *): ");
            scanf(" %c", &operator);
            break;
    }
}

int main(){
    int i, j, a, b;

    prompt_user(1);

    int matriz1[matriz1_x][matriz1_y];
    for (i = 0; i < matriz1_x; i++){
        for (j = 0; j < matriz1_y; j++){
            printf("Digite um valor para as coordenadas (%d %d) : ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    // for (a = 0; a < size_matriz1[0]; a++){
    //     for (b = 0; b < size_matriz1[1]; b++){
    //         printf("%d ", matriz1[a][b]);
    //     }
    //     putchar('\n');
    // }
    // for debugging
    prompt_user(2);

    int matriz2[matriz2_x][matriz2_y];
    for (i = 0; i < matriz2_x; i++){
        for (j = 0; j < matriz1_2; j++){
            printf("Digite um valor para as coordenadas (%d %d) : ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    printf("Matriz 1 : \n");
    for (a = 0; a < size_matriz1[0]; a++){
        putchar('[');
        for (b = 0; b < size_matriz1[1]; b++){
            printf(" %d ", matriz1[a][b]);
        }
        putchar(']');
        putchar('\n');
    }
    // ^ prints matriz1
    printf("Matriz 2 : \n");
    for (a = 0; a < size_matriz2[0]; a++){
        putchar('[');
        for (b = 0; b < size_matriz2[1]; b++){
            printf(" %d ", matriz2[a][b]);
        }
        putchar(']');
        putchar('\n');
    }
    // ^ prints matriz2
    prompt_user(3);
    switch (operator){
        case '+':
            break;
        default:
            printf("ccc");
            break;
    }
    // this version is a WIP and thus it does not work as intended

    return 0;
}
