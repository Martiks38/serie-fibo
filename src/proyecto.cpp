//====================================================================================================================================================================================================================================
// Name        : proyecto.cpp
// Author      : Grupo 2
// Description : En este proyecto se aplicaron los nuevos conocimientos vistos y adquiridos entorno a C++.
//				 Para ello se nos presento el enunciado A. El mismo establece las clases a diseñar con sus respectivos atributos y funciones. Podemos hacer mención de clases concretas, clases abstractas, funciones virtuales,
// 				 constructor no argumentado, constructor argumentado, uso de clases pertenecientes a la librería STL, sobrecarga de operadores.
//				 La idea central es generar y almacenar cada uno de los términos de la serie de Fibonacci en un vector (la cantidad de términos está indicada por la constante n) haciendo uso de clases y abstracciones.
//====================================================================================================================================================================================================================================

#include <iostream>
#include <algorithm>
#include <iomanip>

#include "GeneradorFibonacci.h"
#include "ISecuencia.h"
#include "SerieParcialFibonacci.h"

using namespace std;

//Muestra por pantalla el término de la serie de Fibonacci y su respectivo valor.
void imprimir(unsigned nFibo){

	 // Declaramos indice como variable local estática para que conserve su valor hasta la próxima llamada de la función.
	static unsigned indice;

	/*
	 *  setw es un manipulador de flujo.
	 *  Establece el ancho del campo que será usado para operaciones de salida.
	 *  Nos permite que los datos por pantalla se muestren ordenadamente.
	 */
	std::cout << std::setw(2) << indice++ << ": " << setw(4) << nFibo << endl;
}

int main() {

	/*
	 *  El valor máximo que podemos asignar a n es 47.
	 *  Para n=48 se produce overflow.
	 *  El grupo concuerda de que debe realizarse un método de comprobación del valor de la variable antes de que el programa siga con la siguiente instrucción para solucionar esta vulnerabilidad.
	 *  Nota: no se a realizado para mantenerse fiel a al código presente en el enunciado.
	 */
	const unsigned n = 20;
	 //Instanciamos (creamos) un objeto ad de la clase SerieParcialFibonacci.
	SerieParcialFibonacci ad(n);

	//Puntero a la clase base abstracta ISecuencia que apunta al objeto ad de la clase derivada SerieParcialFibonacci.
	ISecuencia *p = &ad;

	cout << "Tabla de Fibonacci" << endl;
	cout << "------------------" << endl;
	/*
	 *  for_each
	 *  Aplica a la función imprimir cada uno de los elementos en el rango [p->getSerie().begin(), p->getSerie().end()].
	 *  Donde, p->getSerie().begin() y p->getSerie().end() son punteros iteradores de la posición inicial y de la posición final respectivamente, del vector serie del objeto ad.
	 */
	for_each(p->getSerie().begin(),p->getSerie().end(),imprimir);

	return 0;
}





























