#include <iostream>
#include "ElementDecor.hpp"
#include "Maison.hpp"
#include "Escargot.hpp"
#include "Arbre.hpp"


int main(){

	Maison Ms;
	Arbre A;
	Escatgot E;

	const int M=3;
	ElementDecor **decor = new ElementDecor *[M];

	for (int i = 0; i < M; i++) {
		 if(i == 0) {
			 decor[i] = new Maison();
		 }
		 else if (i == 1) {
			 decor[i] = new Escatgot();
		 }
		 else if (i == 2) {
			 decor[i] = new Arbre();
		 }
	}
	//afficher l'ecran
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < M; i++) {
			decor[i]->AfficheDec(j);
		}
	}

	// Libérer la mémoire
	for (int i = 0; i < M; i++) {
		delete decor[i];
	}
	delete[] decor;

	return 0;
}
