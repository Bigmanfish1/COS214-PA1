#include "factory.h"
class vulkanFactory:public Factory
{
    public:
        virtual Window* createWindow();
        virtual Primitive* createPrimitive();
};