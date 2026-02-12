#include <iostream>    // Pour cout
#include "point.h"     // Inclusion de la classe Point

using namespace std;

int main() {
    // Création d’un point avec coordonnées (2.0, 5.0)
    Point p1(2.0, 5.0);

    // Affichage initial
    cout << "Position initiale :" << endl;
    p1.affiche();

    // Affichage en utilisant les accesseurs
    cout << "Abscisse = " << p1.abscisse() << endl;
    cout << "Ordonnee = " << p1.ordonnee() << endl;

    // Déplacement du point (dx=3, dy=-2)
    p1.deplace(3.0, -2.0);

    // Affichage après translation
    cout << "\nApres deplacement :" << endl;
    p1.affiche();

    // Vérification avec les accesseurs
    cout << "Abscisse = " << p1.abscisse() << endl;
    cout << "Ordonnee = " << p1.ordonnee() << endl;

    return 0;   // Fin du programme
}
