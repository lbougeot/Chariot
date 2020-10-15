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
    Element();
    virtual ~Element();
    virtual void Afficher();
};
#endif // ELEMENT_H
