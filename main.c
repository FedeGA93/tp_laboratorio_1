#include <stdio.h>
#include <stdlib.h>
#include "aritmeticas.h"
int main(){

    float operandoUno;
    float operandoDos;
    int flag;
    int flagDos;
    int menu;
    char continuar;
    flag = 0;
    flagDos = 0;
    continuar = 's';

    do {
        if(flag == 0)
        {
            printf("1- Ingresar el primer operando (A)\n");
        }else{
            printf("1- Ingresar el primer operando (A = %.2f)\n",operandoUno);
        }
        if(flagDos == 0)
        {
            printf("2- Ingresar segundo operando (B)\n");
        }else{
            printf("2 - Ingresar segundo operando (B = %.2f)\n",operandoDos);
        }
        printf("3 - Calcular las operaciones y mostrar resultados\n");
        printf("4 - Desea continuar? \n");
        printf("\nIngrese una opcion del menu: ");
        fflush(stdin);
        scanf("%d", &menu);

    switch(menu) {
        case 1:
            printf("\nIngrese el primer operando: ");
            scanf("%f", &operandoUno);
            fflush(stdin);
            flag = 1;
            break;
        case 2:
            printf("\nIngrese el segundo operando: ");
            scanf("%f", &operandoDos);
            fflush(stdin);
            flagDos = 1;
            break;
        case 3:
            RealizarOperaciones(operandoUno, operandoDos);
            break;
        case 4:
            printf("Desea continuar? s/n \n");
            fflush(stdin);
            scanf("%c", &continuar);
            break;
        default:
            printf("Ingreso un valor inválido, el programa terminará de manera automática");
            continuar = 'n';
            system("exit");
            break;
    }

 }while(continuar == 's');

return 0;
}

