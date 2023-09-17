#ifndef P_H
#define P_H
#include <string>

class Primitive
{
    public:
        std::string shape;
        Primitive();
        Primitive(std::string);
        std::string getShape();
        void setShape(std::string);
        virtual std::string toString() = 0;
    protected:
        std::string intToString(int d);
        std::string floatToString(float d);
        // virtual std::string toString() = 0;

};

#endif