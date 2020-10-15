#include <iostream>
#include <string>
#include "element.h"
#include "segment.h"
#include "trajectoire.h"

using namespace std;


int main()
{
    Trajectoire laTrajectoire(1);
   Segment lesSegments(9,0);
   Segment lesSegments2(5,0.927295);
   laTrajectoire.Afficher();
   lesSegments.Afficher();
   lesSegments2.Afficher();



    return 0;
}
