/*
 * ListaNoOrdenada.cpp
 *
 *  Created on: 10/07/2014
 *      Author: pmartin
 */

#include "Lista.h"

//constructor

Lista::Lista() {
	inicio = NULL;
}
//destructor

Lista::~Lista() {
	pNodo aux;
	while (inicio != NULL) {
		aux = inicio;
		inicio = inicio->sig;
		delete aux;
	}
}

bool Lista::estaVacia() {
	return (inicio == NULL);
}

void Lista::insertarAlPrincipio(int x) {
	inicio = new NodoLista(x, inicio);
}

void Lista::escribirLista() {
	NodoLista *aux;
	cout << "Estado de la lista: " << endl;
	aux = inicio;
	while (aux != NULL) {
		cout << aux->clave << " ";
		aux = aux->sig;
	}
	cout << "\n" << endl;
}

void insercion(pNodo &nodo, int x) {
	if (nodo != NULL) {
		if (nodo->clave == x)
			cout << "Error la clave ya existe" << endl;
		else if (nodo->clave < x)
			insercion(nodo->sig, x);
		else
			nodo = new NodoLista(x, nodo);
	} else
		nodo = new NodoLista(x, NULL);
}
void Lista::insertar(int x) {
	insercion(inicio, x);
}
bool Lista::ejercicioConsulta() {
	bool resul = false;
	// COMPLETAR
	if (!estaVacia()) {
		int nodosPares = 0;
		int nodosImpares = 0;
		pNodo aux = inicio;
		while (aux != NULL) {
			if (aux->clave % 2 == 0)
				nodosPares++;
			else
				nodosImpares++;
			aux = aux->sig;
		}

//		cout << "nodospares" << nodosPares << "\n";
//		cout << "nodosimpares:" << nodosImpares << "\n";
		if (nodosPares == nodosImpares)
			resul = true;
	}
	return resul;
}

void Lista::ejercicioInsercion() {
// COMPLETAR
	// intentar que pille el ultimo
	int resul = 0;
	if (!estaVacia()) {
		pNodo aux = inicio;
		bool ultimo = false;
		while (aux != NULL) {
			int clave = aux->clave;
			if (clave % 2 == 0) {
				resul += clave;
			} else {
				resul -= clave;
			}
			if (aux->sig == NULL) {
				ultimo = true;
			}
			if (!ultimo) {
				aux = aux->sig;
			} else {
				aux->sig = new NodoLista(resul, NULL);
				break;
			}
		}
	} else {
		insertar(resul);
	}
}
int Lista::ejercicioEliminacion() {
	int resul = false;
	// COMPLETAR

	return resul;
}
