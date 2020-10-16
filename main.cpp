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

using namespace std;


int main()
{



        Trajectoire laTrajectoire(1);
        Segment lesSegments(9,0,3);
        Segment lesSegments2(5,0.927295,1);
        laTrajectoire.Afficher();
        lesSegments.Afficher();
        lesSegments2.Afficher();





    return 0;
}
