/*
 * GeneradorFibonacci.h
 *
 *  Created on: 2 jun. 2021
 *      Author: Grupo 2
 */

#ifndef GENERADORFIBONACCI_H_
#define GENERADORFIBONACCI_H_

#include <vector>


/*
 *  Nota:
 *  C++11 introdujo la posibilidad de expresar typedef con using en lugar de usar typedef.
 *  Usando typedef sería:
 *  	typedef std::vector<unsigned> Vector;
 */
using Vector = std::vector<unsigned>;


/*
 *  Esta clase almacenará los dos términos necesarios para generar el siguiente de la serie de Fibonacci. Además, del índice del n-ésimo término.
 *
 *  Consta de los siguientes campos:
 *  - n
 *  	Representa el índice del último término generado.
 *  - val
 *  	Esta variable almacenará los dos términos necesarios fₓ₋₁ y fₓ₋₂ para generar el siguiente fₓ
 *
 *  Consta de los siguientes métodos:
 *	- Constructor no argumentado.
 *		Inicializa las variables de clase n y val en 0 (cero).
 *	- Destructor
 *	- Sobrecarga del operador de llamada a una función ().
 *  	Devuelve el siguiente término de la serie de Fibonacci al ser llamado por un objeto de tipo GeneradorFibonacci.
 *  	Por ejemplo, en el primer llamado f(), debe retorna 0 (cero), en el siguiente llmado 1 (uno), en el tercer llamado 1(uno), en el siguiente 2 (dos), y así sucesivamente.
 *	- Función miembro "cuenta"
 *		Retorna el valor del campo n.
 */
class GeneradorFibonacci {
	private:
		unsigned 	n;
		Vector		val;
	public:
		GeneradorFibonacci();
		virtual ~GeneradorFibonacci();
		int operator()(void);
		unsigned cuenta(void)const;
};

#endif /* GENERADORFIBONACCI_H_ */
