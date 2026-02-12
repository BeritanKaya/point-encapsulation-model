#include "point.h"     // Inclusion du header
#include <iostream>    // Pour cout

using namespace std;   // Pour éviter std::cout

// Constructeur : initialise les coordonnées
Point::Point(float abs, float ord) {
    x = abs;  // Affectation de abs à x
    y = ord;  // Affectation de ord à y
}

// Méthode deplace : applique une translation
void Point::deplace(float dx, float dy) {
    x += dx;  // On ajoute dx à l’abscisse
    y += dy;  // On ajoute dy à l’ordonnée
}

// Méthode affiche : affiche les coordonnées
void Point::affiche() {
    cout << "Coordonnees du point : (" << x << ", " << y << ")" << endl;
}

// Accesseur abscisse : retourne la valeur de x
float Point::abscisse() {
    return x;   // On retourne la coordonnée x
}

// Accesseur ordonnee : retourne la valeur de y
float Point::ordonnee() {
    return y;   // On retourne la coordonnée y
}
