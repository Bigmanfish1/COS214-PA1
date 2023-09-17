#include "vulkanPrimitive.h"

vulkanPrimitive::vulkanPrimitive(std::string s,float x,float y):Primitive(s),xcoord(x),ycoord(y){}
vulkanPrimitive::vulkanPrimitive(){}
float vulkanPrimitive::getX(){return this->xcoord;}
float vulkanPrimitive::getY(){return this->ycoord;}
void vulkanPrimitive::setX(float x){this->xcoord = x;}
void vulkanPrimitive::setY(float y){this->ycoord = y;}
std::string vulkanPrimitive::toString(){
    std::string s ="";
    s+= "Vulkan " + getShape() + ":\n" + "\tX coordinate: "+floatToString(getX()) + "\n\t"+  "Y coordinate: " +floatToString(getY())+ "\n";
    return s;
}
