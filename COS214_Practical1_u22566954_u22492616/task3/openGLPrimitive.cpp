#include "openGLPrimitive.h"


openGLPrimitive::openGLPrimitive(std::string s,int x,int y):Primitive(s),xcoord(x),ycoord(y){}
openGLPrimitive::openGLPrimitive(){}
int openGLPrimitive::getX(){return this->xcoord;}
int openGLPrimitive::getY(){return this->ycoord;}
void  openGLPrimitive::setX(int x){this->xcoord = x;}
void  openGLPrimitive::setY(int y){this->ycoord = y;}
std::string openGLPrimitive::toString(){
    std::string s = "";
    s+= "OpenGL " + getShape() + ":\n" + "\tX coordinate: "+intToString(getX()) + "\n\t"+  "Y coordinate: " +intToString(getY())+ "\n";
    return s;
}


