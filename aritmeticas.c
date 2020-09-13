#include <stdio.h>

double CalcularFactorial(double numero)
{
    double resultado;
    int i;
    resultado = 1;
    if(numero != 0)
    {
        for(i = 2 ; i <= numero; i++){
            resultado *= i;
        }
        return resultado;
    }
    else
    {
        return 1;
    }
}

float SumarNumeros(float operandoUno, float operandoDos) {

float resultado;

resultado = operandoUno + operandoDos;

return resultado;
}



float RestarNumeros(float operandoUno, float operandoDos) {

float resultado;

resultado = operandoUno - operandoDos;

return resultado;
}

float MultiplicarNumeros(float operandoUno, float operandoDos) {

float resultado;

resultado = operandoUno * operandoDos;

return resultado;
}

float DividirNumeros(float operandoUno, float operandoDos) {

float resultado;
do {
      if(operandoDos > 0 ) {
           resultado = operandoUno / operandoDos;
        }else {
            printf("Ingrese un divisor mayor a 0");
        }
    } while(operandoDos < 0);

return resultado;
}

float RealizarOperaciones(float operandoUno, float operandoDos) {
    float resultado;
    double resultadoFact;
     if(operandoUno > -1) {
            resultadoFact = CalcularFactorial(operandoUno);
            printf("El factorial de A es: %.2f y su factorial es: %.0f \n",operandoUno, resultadoFact);
        }else {
            printf("No es posible realizar el factorial de %.0f ya que es un número negativo \n", operandoUno);
        }

        if(operandoDos > -1 ) {
            resultadoFact = CalcularFactorial(operandoDos);
            printf("El factorial de B es: %.2f y su factorial es: %.0f \n",operandoDos, resultadoFact);
        }else {
            printf("No es posible realizar el factorial de %.0f ya que es un número negativo \n", operandoDos);
        }

        resultado = SumarNumeros(operandoUno, operandoDos);
        printf("La suma de A: %.2f y B: %.2f es %.2f \n", operandoUno, operandoDos, resultado);

        resultado = RestarNumeros(operandoUno, operandoDos);
        printf("La resta de A: %.2f y B: %.2f es %.2f \n", operandoUno, operandoDos, resultado);

        resultado = MultiplicarNumeros(operandoUno, operandoDos);
        printf("La multiplicacion de A: %.2f y B: %.2f es %.2f \n", operandoUno, operandoDos, resultado);

        if(operandoDos == 0) {
        printf("No es posible dividir por 0 \n \n");
        } else {
        resultado = DividirNumeros(operandoUno, operandoDos);
        printf("La división de A: %.2f y B: %.2f es %.2f \n \n", operandoUno, operandoDos, resultado);

}
return 0;
}
