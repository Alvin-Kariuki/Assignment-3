#ifndef FOUNTAINPEN_H
#define FOUNTAINPEN_H

#include <iostream>

#include <string>

#include "pen.h"

/*!TODO: remove the ’virtual’ keyword from the methods, compile,
run and take note of the results.
Removing the virtual keyword from the methods below had no effect
*/
class FountainPen : public Pen {

//public: FountainPen(std::string pen_name = "FountainPen"): Pen(pen_name) {}

//!TODO: what would happen if you used this version of
//Constructor in the comment box below:	

//FountainPen(std::string pen_name) : Pen(pen_name) {}//
//FountainPen() : Pen(std::string("FountainPen")){}//

/*Results
1. COMPILER error - fuction cannot be overloaded

*/

FountainPen(std::string pen_name) : Pen(pen_name) {}
public: FountainPen() : Pen(std::string("FountainPen")){}

std::string drawLine();

std::string drawCircle();

};

std::string FountainPen::drawLine(){return getName().append(" draws a line.");}

std::string FountainPen::drawCircle(){return getName().append(" draws a circle.");}
