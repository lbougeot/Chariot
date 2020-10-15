#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
/**
  * @file   :   trajectoire.h
  * @author :   Louis Bougeot
  * @date   :   15/10/2020
  * @detail :   Assure la gestion de la classe Trajectoire
  *
  */
#include <element.h>

class Trajectoire : public Element
{
public:
    Trajectoire(const int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(Element *_pElement);
    void Afficher();
private:
    int nbEtapesMax;
    int prochaineEtape;
    Element **lesElements;
    int index;
};

#endif // TRAJECTOIRE_H
