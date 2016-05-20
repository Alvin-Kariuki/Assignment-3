#ifndef LEMON_H
#define LEMON_H
#include "citrusfruits.h"
 class Lemon : public CitrusFruit {
   public:
     Lemon(float ph) : CitrusFruit(ph){}
     virtual const char * getName();
     virtual float getPh();
 };
 #endif