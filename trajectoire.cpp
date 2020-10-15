#include "trajectoire.h"



Trajectoire::Trajectoire(const int _nbEtapesMaxi):
   nbEtapesMax(_nbEtapesMaxi)
{
    lesElements = new Element *[nbEtapesMax];
    index = 0;
}

Trajectoire::~Trajectoire()
{
     delete[] lesElements;
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = true;
    if (index < nbEtapesMax)
        lesElements[index++] = _pElement;
    else
        retour = false;
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl;
}
