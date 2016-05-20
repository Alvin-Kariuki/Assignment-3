 #include <iostream>
 
 #include "methods.h"
 #include "lemon.h"
 #include "orange.h"
 
 void PrintTheFruits(CitrusFruit &fruit){
	 std::cout << "fruit is a " << fruit.getName()
	      << " and has a pH " << fruit.getPh()
		  << std::endl;
 }
 
 void PrintArray(){
	Lemon le1(1.4), le2(4.3), le3(2.1);
	Orange or1(.9), or2(0.2), or3(0.6);
	CitrusFruit *cfarr[] = {&or1, &le1,
							 &or2, &le2,
							 &or3, &le3};
	for(int i = 0; i < 6; i++)
		PrintTheFruits(*(cfarr[i]));
 }