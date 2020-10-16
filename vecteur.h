#include <string>
#include <iostream>

#ifndef VECTEUR_H
#define VECTEUR_H

using namespace std;

class Vecteur
{
public:
    Vecteur(const double _x,const double _y);
    Vecteur operator+(const string _autre);
    Vecteur operator-(const string _autre);
    void Afficher();
    void setX(const double _x);
    double getX();
    void setY(const double _y);
    double getY();

private:
    double x;
    double y;
};

#endif // VECTEUR_H
