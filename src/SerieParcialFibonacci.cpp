/*
 * SerieParcialFibonacci.cpp
 *
 *  Created on: 2 jun. 2021
 *      Author: Grupo 2
 */

#include "SerieParcialFibonacci.h"
#include <iostream>

SerieParcialFibonacci::SerieParcialFibonacci(const unsigned n) {

	//Asignamos el valor de n a longitud
	longitud = n;

	/*
	 *  Reservamos n+1 elementos en memoria para el vector de unsigned, serie.
	 *  Pedimos n+1 dado que también almacenamos el valor 0.
	 */
	serie.reserve(n+1);

	/*
	 *  A continuación, se almacenarán los n+1 términos de la serie de Fibonacci.
	 *  Para ello se hará uso de:
	 *  Las siguientes funciones miembro de <vector>:
	 *  - insert
	 *  - begin
	 *
	 *  Y, del operador sobrecargado llamada a una función,(), que generará en cada uno de los búcles el siguiente término de la serie.
	 *
	 */
	for(unsigned indice=0; indice < n+1; indice++){
		serie.insert(serie.begin() + indice, f());
	}
}

SerieParcialFibonacci::~SerieParcialFibonacci() {
	//std::cout << "Se invocó al destructor de SerieParcialFibonacci.\n";
}

//Pasamos por referencia el vector de unsigned, serie.
Vector& SerieParcialFibonacci::getSerie(){
	return this->serie;
}
