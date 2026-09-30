#include <stdio.h>
int main(){
    int executed_program = 1;
    do{
        char   operator       = '+';
        double var1, var2;
        double result;
        int    valid_operator = 0;

        printf("Type in the first number       : ");
        scanf("%lf", &var1);

        printf("Type in the operator (+ - * /) : ");
        scanf(" %c", &operator);

        printf("Type in the second number      : ");
        scanf("%lf", &var2);

        switch (operator){
        case '+' :
            result = var1 + var2;
            break;
        case '-' :
            result = var1 - var2;
            break;
        case '*' :
            result = var1 * var2;
            break;
        case '/' :
            result = var1 / var2;
            break;
        default:
            valid_operator++;
            break;
        }
        putchar('\n');
        printf("First number.. : %.2f \n", var1);
        printf("Second number. : %.2f \n", var2);
        if (valid_operator == 0){
            printf("Operator...... : %c \n", operator);
            printf("Result........ : %.2lf\n", result);
            executed_program--;
        }
        else{
            printf("Invalid operator. Restarting.\n\n");
        }
    } while (executed_program);
	return 0;
}