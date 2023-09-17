#ifndef f_H
#define f_H
#include "openGLWindow.h"
#include "vulkanWindow.h"
class Factory
{
    public:
        virtual Window* createWindow() = 0;
        virtual Primitive* createPrimitive() = 0;
    
};
#endif