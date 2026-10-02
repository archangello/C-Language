#include <stdio.h>
#include <stdlib.h>


int matriz1_x = 0;
int matriz1_y = 0;
int matriz2_x = 0;
int matriz2_y = 0;

int op_valid = 0;

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
    do{
        int i, j, a, b;

        prompt_user(1);

        int matriz1[matriz1_x][matriz1_y];
        for (i = 0; i < matriz1_x; i++){
            for (j = 0; j < matriz1_y; j++){
                printf("Digite um valor para as coordenadas (%d %d) : ", i + 1, j + 1);
                scanf("%d", &matriz1[i][j]);
            }
        }
        // for (a = 0; a < matriz1_x[0]; a++){
        //     for (b = 0; b < matriz1_y[1]; b++){
        //         printf("%d ", matriz1[a][b]);
        //     }
        //     putchar('\n');
        // }
        // for debugging
        prompt_user(2);

        int matriz2[matriz2_x][matriz2_y];
        for (i = 0; i < matriz2_x; i++){
            for (j = 0; j < matriz2_y; j++){                                               
                printf("Digite um valor para as coordenadas (%d %d) : ", i + 1, j + 1);
                scanf("%d", &matriz2[i][j]);
            }
        }
        
        printf("Matriz 1 : \n");
        for (a = 0; a < matriz1_x; a++){
            putchar('[');
            for (b = 0; b < matriz1_y; b++){
                printf(" %d ", matriz1[a][b]);
            }
            putchar(']');
            putchar('\n');
        }
        // ^ prints matriz1
        printf("Matriz 2 : \n");
        for (a = 0; a < matriz2_x; a++){
            putchar('[');
            for (b = 0; b < matriz2_y; b++){
                printf(" %d ", matriz2[a][b]);
            }
            putchar(']');
            putchar('\n');
        }
        // ^ prints matriz2

        prompt_user(3);
        switch (operator){
            case '+':
                if (matriz1_x == matriz2_x && matriz1_y == matriz2_y){
                    for (a = 0; a < matriz1_x; a++)
                    {
                        for (b = 0; b < matriz1_y; b++)
                        {
                            matriz1[a][b] = matriz1[a][b] + matriz2[a][b];
                        }
                    }
                }
                else{
                    op_valid++;
                }
                break;
            case '-':
                if (matriz1_x == matriz2_x && matriz1_y == matriz2_y){
                    for (a = 0; a < matriz1_x; a++)
                    {
                        for (b = 0; b < matriz1_y; b++)
                        {
                            matriz1[a][b] = matriz1[a][b] - matriz2[a][b];
                        }
                    }
                }
                else{
                    op_valid++;
                }
                break;
            // case '*':
            //     if (matriz1_x == matriz2_y){
            //         // -> size of result = matriz2_x, matriz1_y
            //         int matriz1[matriz2_x][matriz1_y];
            //         for (a = 0; a < matriz2_x; a++)
            //         {
            //             for (b = 0; b < matriz1_y; b++)
            //             {
            //                 matriz1[a][b];
            //             }  
            //         }
            //     }
            // matrix multiplication is a WIP
            // multiplicacao de matrizes ainda esta sendo feita!
            default:
                printf("Invalid operator. Restarting ... \n");
                op_valid++;
                break;
        }
        if (!op_valid){
            printf("Matriz resultado : \n");
            for (a = 0; a < matriz1_x; a++){
                putchar('[');
                for (b = 0; b < matriz1_y; b++){
                    printf(" %d ", matriz1[a][b]);
                }
                putchar(']');
                putchar('\n');
                op_valid++;
            }
        }
    } while (!op_valid);
    return 0;
}
