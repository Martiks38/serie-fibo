/*
 * ISecuencia.h
 *
 *  Created on: 5 jun. 2021
 *      Author: Grupo 2
 */

#ifndef ISECUENCIA_H_
#define ISECUENCIA_H_

#include <vector>

/*
 *  Nota:
 *  C++11 introdujo la posibilidad de expresar typedef con using en lugar de usar typedef.
 *  Usando typedef sería:
 *  	typedef std::vector<unsigned> Vector;
 */
using Vector = std::vector<unsigned>;

//Clase base abstracta cuya función es pasar por referencia un vector de unsigned.
class ISecuencia {
public:
	virtual Vector& getSerie(void)= 0;
};

#endif /* ISECUENCIA_H_ */
