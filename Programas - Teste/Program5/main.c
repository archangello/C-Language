#include <stdio.h>
#include <stdlib.h>

int size_matriz1[] = {0, 0};
int size_matriz2[] = {0, 0};

char operator = ' ';

void prompt_user(int mode){
    switch (mode){
        case 1:
            printf("Digite as dimensoes de sua matriz : ");
            scanf("%d %d", &size_matriz1[0], &size_matriz1[1]);
            printf("Dimensoes : %d %d\n", size_matriz1[0], size_matriz1[1]);
            break;
        case 2:
            printf("Digite as dimensoes de sua matriz : ");
            scanf("%d %d", &size_matriz2[0], &size_matriz2[1]);
            printf("Dimensoes : %d ; %d\n", size_matriz2[0], size_matriz2[1]);
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

    int matriz1[size_matriz1[0]][size_matriz1[1]];
    for (i = 0; i < size_matriz1[0]; i++){
        for (j = 0; j < size_matriz1[1]; j++){
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

    int matriz2[size_matriz2[0]][size_matriz2[1]];
    for (i = 0; i < size_matriz2[0]; i++){
        for (j = 0; j < size_matriz2[1]; j++){
            printf("Digite um valor para as coordenadas (%d %d) : ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    // prints matriz1
    printf("Matriz 1 : \n");
    for (a = 0; a < size_matriz1[0]; a++){
        putchar('[');
        for (b = 0; b < size_matriz1[1]; b++){
            printf(" %d ", matriz1[a][b]);
        }
        putchar(']');
        putchar('\n');
    }
    printf("Matriz 2 : \n");
    for (a = 0; a < size_matriz2[0]; a++){
        putchar('[');
        for (b = 0; b < size_matriz2[1]; b++){
            printf(" %d ", matriz2[a][b]);
        }
        putchar(']');
        putchar('\n');
    }
    prompt_user(3);
    switch (operator){
        case '+':
            if (size_matriz1[0] != size_matriz2[0] || size_matriz1[1] != size_matriz1[1]){
                printf("Operacao invalida. Reiniciando ... \n\n");
                system("clear");
            }
            printf("bbb");
            break;
        default:
            printf("aaa");
            break;
    }
    // this version is a WIP and thus it does not work as intended

    return 0;
}