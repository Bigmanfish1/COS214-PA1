#ifndef VP_H
#define VP_H
#include "primitive.h"
class vulkanPrimitive:public Primitive
{
    public:
        float xcoord;
        float ycoord;
        vulkanPrimitive(std::string,float,float);
        vulkanPrimitive();
        float getX();
        float getY();
        void setX(float);
        void setY(float);
        virtual std::string toString();

};
#endif