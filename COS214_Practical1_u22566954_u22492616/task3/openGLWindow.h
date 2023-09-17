#ifndef OGL_H
#define OGL_H
#include "window.h"
#include "openGLPrimitive.h"
class openGLWindow:public Window
{
    public:
        openGLPrimitive* primitives;
        openGLWindow();
        openGLWindow(int,int);
        void addPrimitive(openGLPrimitive&);
        void removePrimitive(std::string);
        void setPrimitives(openGLPrimitive*);
        openGLPrimitive* getPrimitives();
        virtual std::string toString();
};

#endif