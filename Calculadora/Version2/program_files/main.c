#include <stdio.h>
#include <stdlib.h>

int poten_10(int exp){
    int temp  = exp;
    int resul = 1;
    while(temp > 1){
        resul *= 10;
        temp--;
    }
    return resul;
    // done - do not edit
}
int array_into_int(int array[], int len){
    int resul = 0;
    int i     = 0;
    for(i = 0; i < len; i++){
        resul += array[i] * poten_10(len - i); 
    }
    return resul;
    // done - do not edit
}

char* read_line(FILE *ptr){
    char letra;
    int  i             = 0;
    int  position      = 0;
    int  char_invalido = 0;

    ptr = fopen("number.txt", "r");
    while(fscanf(ptr, "%c", &letra) != EOF && fscanf(ptr, "%c", &letra) != '\n'){
        fseek(ptr, position, SEEK_SET);
        fscanf(ptr, "%c", &letra);
        printf("%c", letra);
        position++;
    }
    char line[position];
    position = 0;
    while(fscanf(ptr, "%c", &letra) != EOF){
        fseek(ptr, position, SEEK_SET);
        fscanf(ptr, "%c", &letra);
        line[position] = letra;
        position++;
    }
    // this part of the code will be used to return the line read bt this function

    fclose(ptr);
    return line;
}
int main(){
    FILE *point;

    int  i         = 0;
    char arquivo[] = read_line(point);

    for (i = 0; i < sizeof arquivo / sizeof(char); i++){
        printf("%c\n", arquivo[i]);
    }
    
    // running this code will read the entire 'number.txt' file and print it in the terminal

    return 0;
}
    // current problems :
    //  - function readline() reads entire file, not first line
    //  - function readline() returns (null)
    //  - in main, char arquivo gives 'invalid initializer' as a error code