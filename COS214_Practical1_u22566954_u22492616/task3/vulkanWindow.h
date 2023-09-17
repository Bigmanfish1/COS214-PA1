#ifndef VW
#define VW_H
#include "window.h"
#include "vulkanPrimitive.h"
class vulkanWindow:public Window
{
    public:
        vulkanPrimitive* primitives;
        vulkanWindow();
        vulkanWindow(int,int);
        void addPrimitive(vulkanPrimitive&);
        void removePrimitive(std::string);
        void setPrimitives(vulkanPrimitive*);
        vulkanPrimitive* getPrimitives();
        virtual std::string toString();

};

#endif