#include "Arbre.hpp"

void Arbre::AfficheDec(int i)
{
		if (i == 0) {
			cout << "  /\\  "<<endl;
		}
		else if(i == 1){
			cout << " //\\\\"<<endl;
		}
		else {
			cout << " ||    "<<endl;
		}
}
	