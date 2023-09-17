#ifndef OP_H
#define OP_H
#include "primitive.h"
class openGLPrimitive:public Primitive
{
    public:
        int xcoord;
        int ycoord;
        openGLPrimitive(std::string,int,int);
        openGLPrimitive();
        int getY();
        int getX();
        void setX(int);
        void setY(int);
        virtual std::string toString();

};
#endif