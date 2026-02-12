#ifndef POINT_H         // Protection contre inclusion multiple
#define POINT_H

// Définition de la classe Point
class Point {
private:
    float x;   // Coordonnée x du point (privée → encapsulation)
    float y;   // Coordonnée y du point (privée → encapsulation)

public:
    // Constructeur qui initialise les coordonnées du point
    Point(float abs, float ord);

    // Méthode qui effectue une translation du point
    void deplace(float dx, float dy);

    // Méthode qui affiche les coordonnées du point
    void affiche();

    // Accesseur qui retourne l’abscisse (x) du point
    float abscisse();

    // Accesseur qui retourne l’ordonnée (y) du point
    float ordonnee();
};

#endif // Fin de la directive de protection
