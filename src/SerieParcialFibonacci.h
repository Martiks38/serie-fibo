/*
 * SerieParcialFibonacci.h
 *
 *  Created on: 2 jun. 2021
 *      Author: Grupo 2
 */

#ifndef SERIEPARCIALFIBONACCI_H_
#define SERIEPARCIALFIBONACCI_H_

#include "GeneradorFibonacci.h"
#include "ISecuencia.h"

/*
 *  Clase derivada concreta de la clase ISecuencia.
 *
 *  Consta de los siguientes campos:
 *  - f
 *  	Objeto del tipo GeneradorFibonaci
 *  - longitud
 *		Representa la cantidad hasta qué término se almacena en el vector de la serie de Fibonacci.
 *	- serie
 *		Es un vector que almacena elementos unsigned. Su función es almacenar parcialmente los términos de la serie de Fibonacci desde el 0 hasta el valor de longitud; por lo que su tamaño es longitud+1.
 *
 *	Consta de los siguientes métodos:
 *	- SerieParcialFibonacci(const unsigned)
 *		Constructor parametrizado.
 *	- ~SerieParcialFibonacci()
 *		Destructor
 *	- vector& getSerie()
 *		Su función es pasar por referencia un vector de unsigned.
 */
class SerieParcialFibonacci: public ISecuencia{
	private:
		GeneradorFibonacci	f;
		unsigned			longitud;
		Vector				serie;
	public:
		SerieParcialFibonacci(const unsigned);
		virtual ~SerieParcialFibonacci();
		virtual Vector& getSerie();
};

#endif /* SERIEPARCIALFIBONACCI_H_ */

































