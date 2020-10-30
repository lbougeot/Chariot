/**
  * @file   :   segment.cpp
  * @brief implémentation de la classe Segment
  * @version 1.0
  * @author :   Louis Bougeot
  * @date   :   15/10/2020
  * @detail :   Classe gestions des Segments
  *
  */

#include "segment.h"
#include <string>
#include <iostream>


using namespace std;


Segment::Segment(const double _longueur, const double _angle):
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur << setfill(' ') << setw(10) << "A = " << angle << setfill(' ') << setw(10) << endl;
}
