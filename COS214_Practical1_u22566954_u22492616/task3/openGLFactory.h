#include "factory.h"
class openGLFactory:public Factory
{
    public:
        virtual Window* createWindow();
        virtual Primitive* createPrimitive();
        
};