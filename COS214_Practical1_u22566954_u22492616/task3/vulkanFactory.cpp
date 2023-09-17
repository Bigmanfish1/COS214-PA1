#include "vulkanFactory.h"
Window* vulkanFactory::createWindow(){return new vulkanWindow();}
Primitive* vulkanFactory::createPrimitive(){return new vulkanPrimitive();}