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
	return resul;
}

void Lista::ejercicioInsercion() {
	// COMPLETAR
}
int Lista::ejercicioEliminacion() {
	int resul = false;
	// COMPLETAR
	return resul;
}
