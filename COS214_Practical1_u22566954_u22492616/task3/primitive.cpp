#include "primitive.h"
#include <sstream>
// Primitive::Primitive(std::string s){this->shape = s;}
std::string Primitive::intToString(int d)
{
    std::string s;
    std::stringstream ss;
    ss<<d;
    ss>>s;
    return s;
}
std::string Primitive::floatToString(float d)
{
    std::string s;
    std::stringstream ss;
    ss<<d;
    ss>>s;
    return s;
}
Primitive::Primitive(std::string s){this->shape = s;}
Primitive::Primitive(){}
std::string Primitive::getShape(){return this->shape;}
void Primitive::setShape(std::string s) {this->shape = s;}