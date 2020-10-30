/**
  * @file   :   trajectoire.cpp
  * @brief implémentation de la classe Trajectoire
  * @version 1.0
  * @author :   Louis Bougeot
  * @date   :   15/10/2020
  * @detail :   Classe gestions des trajectoires
  *
  */

#include "trajectoire.h"


Trajectoire::Trajectoire(const int _nbEtapesMaxi):
   nbEtapesMax(_nbEtapesMaxi)
{

}

Trajectoire::~Trajectoire()
{

}

bool Trajectoire::Ajouter(Element *_pElement)
{

}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl;
}
