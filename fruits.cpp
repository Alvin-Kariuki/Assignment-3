#include <iostream>

#include "methods.h"
#include "lemon.h"
#include "orange.h"

 int main(){
   Lemon lemon(2.0);
   //This is perfectly legal!
   CitrusFruit &rlemon = lemon;
   PrintTheFruits(rlemon);
   Orange chungwa(1.0);
   CitrusFruit &rchungwa = chungwa;
   PrintTheFruits(rchungwa);   
   PrintArray();
   return 0;
 }