
 /** \brief Funcion para realizar la operación de suma, tomando dos valores elegidos por el usuario
  *
  * \param operandoUno float Ingrese el primer sumando
  * \param operandoDos float Ingrese el segundo sumando
  * \return float el resultado de la suma de los sumandos
  *
  */
 float SumarNumeros(float operandoUno, float operandoDos);



 /** \brief Funcion para realizar la operación de resta, tomando dos valores elegidos por el usuario
  *
  * \param operandoUno float el primer operando ingresado por el usuario
  * \param operandoDos float el segundo operando ingresado por el usuario
  * \return float devuelve el resultado de la resta de los dos operandos ingresados por el usuario
  *
  */
 float RestarNumeros(float operandoUno, float operandoDos);



 /** \brief Funcion para realizar la operación de multiplicacion, tomando dos valores elegidos por el usuario
  *
  * \param operandoUno float el primer operando ingresado por el usuario
  * \param operandoDos float el segundo operando ingresado por el usuario
  * \return float Devuelve el resultado de la multiplicacion del primer operando por el segundo operando
  *
  */
 float MultiplicarNumeros(float operandoUno, float operandoDos);



/** \brief Funcion para realizar la operación de suma, tomando dos valores elegidos por el usuario, siendo el segundo valor distinto de 0
 *
 * \param operandoUno float el dividendo ingresado por el usuario
 * \param operandoDos float el divisor ingresado por el usuario mayor distinto de 0
 * \return float Devuelve el cociente de los dos numeros, siempre y cuando el dividendo sea distinto de 0
 *
 */
float DividirNumeros(float operandoUno, float operandoDos);



/** \brief El usuario deberá ingresar un número para calcular el factorial
 *
 * \param numero int Numero ingresado por el usuario
 * \return int el resultado de factorizar el numero ingresado por el usuario siempre que sea mayor que 0
 *
 */
double CalcularFactorial(double numero);

/** \brief Toma todas las operaciones mencionadas previamente y realiza una a una las operacione para imprimirlas al usuario
 *
 * \param operandoUno float primer numero ingresado por el usuario
 * \param OperandoDos float segundo numero ingresado por el usuario
 * \return float Se realizan todas las cuentas y las imprime en pantalla
 *
 */
float RealizarOperaciones(float operandoUno, float OperandoDos);


