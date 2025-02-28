#include "sum.h"
#include "difference.h"
#include "multiplication.h"
#include "division.h"

int main(){
    char operation[20];
    printf("Введите выражение в формате: Число Оператор Число (например, '3 + 4')\n");
    printf("exit, чтобы выйти \n");
    while (1){
        printf("> ");
        fgets(operation, sizeof(operation), stdin);
        operation[strcspn(operation,"\n")]='\0';
        if (strcmp(operation,"exit")==0){
            break;
        }
        char *first_number = strtok(operation," ");
        char *operator = strtok(NULL," ");
        char *second_number = strtok(NULL," ");

        if (first_number==NULL || operator == NULL || second_number == NULL){
            printf("Ошибка ввода! Формат: число оператор число (например, '3 + 4')\n");
            continue;
        }
        int a = strtol(first_number,NULL,10);
        int b = strtol(second_number,NULL,10);


        if (strcmp(operator,"+")==0){
            sum(a,b);
        }
        else if (strcmp(operator,"-")==0){
            difference(a,b);
        }
        else if (strcmp(operator,"*")==0){
            multiplication(a,b);
        }
        else if (strcmp(operator,"/")==0){
            division(a,b);
        }
        else{
            printf("Неверное действие! \n");
        }
    }
}
