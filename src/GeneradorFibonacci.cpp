/*
 * GeneradorFibonacci.cpp
 *
 *  Created on: 2 jun. 2021
 *      Author: Grupo 2
 */

#include "GeneradorFibonacci.h"
#include <iostream>

using std::cout;
using std::endl;

GeneradorFibonacci::GeneradorFibonacci() {
	/*
	 *  Inicializamos el campo n en 0 (cero).
	 *  Para el campo val. Si el vector no posee elementos, reserva n elementos en el espacio de memoria e inicializa a cada uno con una copia del valor pasado en este caso 0 (cero).
	 *  En el caso de que ya haya memoria reservada, inicializará los primeros n elementos de acuerdo al valor pasado en el argumento respectivamente.
	 */
	n = 0;
	val.assign(2,0);
}

GeneradorFibonacci::~GeneradorFibonacci() {
	//cout << "Se invocó al destructor del GeneradorFibonacci.\n";
}

unsigned GeneradorFibonacci::cuenta(void) const { return this->n;}

int GeneradorFibonacci::operator()(void){

	/*
	 * 	En cada llamado el valor del campo n aumentará en 1 (uno).
	 *  Cuando el objeto de tipo GeneradorFibonacci realiza los dos primeros llamados retorna el valor del campo n siendo los dos primeros términos de la serie de Fibonacci y cambiamos el valor de los elementos del campo val a 1 (uno) en cada llamado.
	 *  Este cambio se hace con la idea de generar el término 3 de la serie de Fibonacci.
	 *  Para generar el término 2 se realiza el aumento del campo n y se retorna n-2.
	 *  Desde n=3 en adelante se utilizará el vector val para generar los siguientes términos de la serie.
	 *  Para ello, utilizaremos la variable ST que almacenará la suma de los dos elementos del vector.
	 *  Luego, guardamos el valor del elemento 0 del vector en el elemento 1 y almacenamos el valor del nuevo término en el elemento 0. Con esto logramos tener los dos términos anteriores para generar el siguiente de la serie.
	 */
	if( n > 2){
		int ST= val[0] + val[1];
		val[1] = val[0];
		val[0] = ST;
		n++;
		return ST;
	}
	if(n < 2){
		val[n] = 1;
		return (this->n)++;
	}
	n++;
	return n-2;
}
