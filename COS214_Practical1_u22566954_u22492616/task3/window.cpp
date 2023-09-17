#include "window.h"

Window::Window(int sH,int sW){
    this->screenheight = sH;
    this->screenwidth = sW;
    this->primitiveCapacity = 0;
    this->primitiveCount = 0;
}
Window::Window()
{
    this->screenheight = 0;
    this->screenwidth = 0;
    this->primitiveCapacity = 0;
    this->primitiveCount = 0;

}
#include <sstream>
// Primitive::Primitive(std::string s){this->shape = s;}
std::string Window::intToString(int d)
{
    std::string s;
    std::stringstream ss;
    ss<<d;
    ss>>s;
    return s;
}
std::string Window::floatToString(float d)
{
    std::string s;
    std::stringstream ss;
    ss<<d;
    ss>>s;
    return s;
}
int Window::getWidth(){return this->screenwidth;}
int Window::getHeight(){return this->screenheight;}
int Window::getPCount(){return this->primitiveCount;}
int Window::getPCapacity(){return this->primitiveCapacity;}
void Window::setW(int w){screenwidth = w;}
void Window::setH(int h){screenheight = h;}
void Window::setCap(int c){primitiveCapacity = c;}
void Window::setCount(int c){primitiveCount = c;}