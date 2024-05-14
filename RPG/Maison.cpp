#include "Maison.hpp"


void Maison::AfficheDec(int i)
{
		if (i == 0){
			cout << " /\\ " ;
		} else if ( i == 1) {
			cout << "/--\\";
		}
		else {
			cout << "|__| ";
		}
}
