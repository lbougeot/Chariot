/**
  * @file   :   main.cpp
  * @version 1.0
  * @author :   Louis Bougeot
  * @date   :   15/10/2020
  *
  */
#include <iostream>
#include <string>
#include "element.h"
#include "segment.h"
#include "trajectoire.h"
#include "vecteur.h"

using namespace std;


int main()
{


        Vecteur levecteur1(9,0);
        Vecteur levecteur2(12,4);
        Trajectoire laTrajectoire(2);
        Segment lesSegments(9,0,3);
        Segment lesSegments2(5,0.927295,1);
        laTrajectoire.Afficher();
        lesSegments.Afficher();
        levecteur1.Afficher();
        laTrajectoire.Ajouter(&lesSegments2);
        lesSegments2.Afficher();
        levecteur2.Afficher();




    return 0;
}
