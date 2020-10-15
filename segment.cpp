#include "segment.h"
#include <string>
#include <iostream>


using namespace std;


Segment::Segment(const double _longueur, const double _angle):
    longueur(_longueur),
    angle(_angle)
{
    cout << "Constructeur de la classe Segment" << endl;
}

void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur << "     A = " << angle << endl;
}
