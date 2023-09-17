#include "openGLFactory.h"
Window* openGLFactory::createWindow(){return new openGLWindow();}
Primitive* openGLFactory::createPrimitive(){return new openGLPrimitive();}