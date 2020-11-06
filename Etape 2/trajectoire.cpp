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
    parcours = new Element *[nbEtapesMax];
    index = 0;
}

Trajectoire::~Trajectoire()
{
     delete[] parcours;
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = false;
    if (index < nbEtapesMax)
    {

        _pElement->setNumero(index+1);
        parcours[index++] = _pElement;
    }
        else
        {
               retour = true;
        }

    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl;
}
