#include "vecteur.h"

Vecteur::Vecteur(const double _x, const double _y):
x(_x),
y(_y)
{

}


Vecteur Vecteur::operator+(const string _autre)
{

}

Vecteur Vecteur::operator-(const string _autre)
{

}



void Vecteur::Afficher()
{
 cout << "Vecteur en (" << x << "," << y << ")" << endl;
}

double Vecteur::getX() const
{
    return x;
}

void Vecteur::setX(double value)
{
    x = value;
}

double Vecteur::getY() const
{
    return y;
}

void Vecteur::setY(double value)
{
    y = value;
}






