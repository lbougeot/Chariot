#ifndef ELEMENT_H
#define ELEMENT_H
/**
  * @file   :   element.h
  * @author :   Louis Bougeot
  * @date   :   15/10/2020
  * @detail :   Assure la gestion de la classe Element
  *
  */
#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
using namespace std;

class Element
{
public:
    Element(const int _vitesse=1);
    virtual ~Element();
    virtual void Afficher();
    int getNumero() const;
    void setNumero(int value);

    int getVitesse() const;
    void setVitesse(int value);
   // virtual float ObtenirLongueur();
   // virtual float ObtenirDuree();
   // virtual float ObtenirVecteurArivee();

protected:
    int numero;
    int vitesse;
};
#endif // ELEMENT_H

