/*
 * Actividad.cpp
 *
 *  Created on: 20/03/2015
 *      Author: Pilar
 */
#include "Lista.h"

void juegoEnsayo1(Lista &lista) {
	// caso 1
/*
	lista.insertarAlPrincipio(3);
	lista.insertarAlPrincipio(8);
	lista.insertarAlPrincipio(4);
	lista.insertarAlPrincipio(2);
	lista.insertarAlPrincipio(1);

	// caso 2
*/
	 lista.insertarAlPrincipio(5);
	 lista.insertarAlPrincipio(2);
	 lista.insertarAlPrincipio(4);
	 lista.insertarAlPrincipio(7);

}

void juegoEnsayo2(Lista &lista) {
	// COMPLETAR
	// caso 1

	lista.insertarAlPrincipio(6);
	lista.insertarAlPrincipio(9);
	lista.insertarAlPrincipio(15);
	lista.insertarAlPrincipio(8);
	lista.insertarAlPrincipio(3);
	// caso 2
/*
	lista.insertarAlPrincipio(6);
	lista.insertarAlPrincipio(4);
	lista.insertarAlPrincipio(15);
	lista.insertarAlPrincipio(8);
	lista.insertarAlPrincipio(3);
*/
	 // caso 3 nada de codigo dentro


}

void juegoEnsayo3(Lista &lista) {
	// COMPLETAR
}

int main() {
	Lista l1, l2, l3;
	juegoEnsayo1(l1);
	l1.escribirLista();
	bool resul = l1.ejercicioConsulta();
	if (resul)
		cout << "Resultado ejercicio 1: true" << endl;
	else
		cout << "Resultado ejercicio 1: false" << endl;
	l1.escribirLista();
	juegoEnsayo2(l2);
	l2.escribirLista();
	cout << "Resultado ejercicio 2: " << endl;
	l2.ejercicioInsercion();
	l2.escribirLista();
	juegoEnsayo3(l3);
	l3.escribirLista();
	cout << "Resultado ejercicio 3: " << l3.ejercicioEliminacion() << endl;
	l3.escribirLista();
	return 0;
}
