/**
  * @file   :   element.cpp
  * @brief implémentation de la classe Element
  * @version 1.0
  * @author :   Louis Bougeot
  * @date   :   15/10/2020
  * @detail :   Classe gestions des éléments
  *
  */

#include "element.h"
#include <string>
#include <iostream>

using namespace std;



Element::Element(const int _vitesse) :
    vitesse(_vitesse),
    numero(0)
{

}

Element::~Element()
{

}

void Element::Afficher()
{

}

int Element::getNumero() const
{
    return numero;
}

void Element::setNumero(int value)
{
    numero = value;
}

int Element::getVitesse() const
{
    return vitesse;
}

void Element::setVitesse(int value)
{
    vitesse = value;
}









