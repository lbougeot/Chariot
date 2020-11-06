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


Segment::Segment(const double _longueur, const double _angle, const int _vitesse):
    longueur(_longueur),
    angle(_angle),
    vitesse(_vitesse)
{
    cout << "Constructeur de la classe Segment" << endl;
}

void Segment::Afficher()
{
    cout << "(" << numero << ")" << "SEGMENT L = " << longueur << setfill(' ') << setw(10) << "A = " << angle << setfill(' ') << setw(10) << "V = " << vitesse << endl;
}

float Segment::ObtenirLongueur()
{
    return  longueur;
}

float Segment::ObtenirDuree()
{
   duree = longueur / vitesse;
}

float Segment::ObtenirVecteurArivee()
{

}
