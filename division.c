#include "division.h"

int division(int a,int b){
    if (b == 0){
        printf("Ошибка деления на 0! \n");
        return 1;
    }
    printf("Результат операции: %d", a / b);
    printf("\n");
}

