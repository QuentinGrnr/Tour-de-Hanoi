#include <iostream>
#include <fstream>
#include <stack>
#include <stdlib.h>

using namespace std;

#include "hanoi.h"

int main(int argc,char** argv)
{
	if(argc < 2)
		cout << "Nombre d'arguments insuffisants" << endl;
	else{
		int n = atoi(argv[1]);
		hanoi h(n);
		h.etat();
		h.mouvements(n);
		return 1;
	}
	return -1;
}