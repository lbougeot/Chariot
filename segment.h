#ifndef SEGMENT_H
#define SEGMENT_H
/**
  * @file   :   segment.h
  * @author :   Louis Bougeot
  * @date   :   15/10/2020
  * @detail :   Assure la gestion de la classe Segment
  *
  */
#include <element.h>

class Segment : public Element
{
public:
    Segment(const double _longueur, const double _angle,const int vitesse);
    void Afficher();
private:
   double longueur;
   double angle;
   const int vitesse;
};

#endif // SEGMENT_H
