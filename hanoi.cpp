#include<iostream>
#include <stack>

using namespace std;

#include"hanoi.h"


/* Constructeur de la classe */
hanoi::hanoi(int n)
{
    // Remplir initialement la tige indicée 0
}


void hanoi::etat()
{
// Affiche l'état (le contenu) des tours sous la forme suivante.

/* 
Tiges[0] : numéros (séparés par des espaces) des disques s'y trouvant
Le numéro le plus à gauche correspondra au disque le plus bas.
Tiges[1] : idem
Tiges[2] : idem
---------------------------
*/ 

/*
Les tirets correspondent à l'instruction
 
cout << "---------------------------" << endl;
*/

    
}

void hanoi::mouvements(int n)
{
// Calcul et affichage de tous les mouvements de disques à effectuer.  Les mouvements seront affichés grâce à
// la méthode "etat().
// Par exemple, avec 3 disques, initialement l'état est :
/*
Tiges[0] : 3 2 1
Tiges[1] :
Tiges[2] :
---------------------------
*/ 
// Si le disque 1 est déplacé vers la tige 1 alors le nouvel état est :
/*
Tiges[0] : 3 2
Tiges[1] :
Tiges[2] : 1
---------------------------
*/


//Les deux mouvements successifs seront donc affichés
/*
Tiges[0] : 3 2 1
Tiges[1] :
Tiges[2] :
---------------------------
Tiges[0] : 3 2
Tiges[1] :
Tiges[2] : 1
---------------------------
*/

}

void hanoi::deplacer(int n, int gauche, int milieu, int droite)
{
    // Méthode récursive permettant de déplacer les disques de gauche sur la tige de droite en utilisant la tige 
    // du milieu (voir description TP)
}