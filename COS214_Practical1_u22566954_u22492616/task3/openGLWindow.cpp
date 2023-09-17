#include "openGLWindow.h"
openGLWindow::openGLWindow()
{
    primitiveCapacity = 3;
    primitiveCount = 0;
    primitives = new openGLPrimitive[3];
}
openGLWindow::openGLWindow(int w,int h):Window(w,h)
{
    primitiveCapacity = 3;
    primitiveCount = 0;
    primitives = new openGLPrimitive[3];
}
void openGLWindow::addPrimitive(openGLPrimitive& p)
{
    if(primitiveCount < primitiveCapacity)
    {
        primitives[primitiveCount++] = p;
    }
    else
    {
        std::cout <<"Primitives array is full"<<std::endl;
    }
}

void openGLWindow::removePrimitive(std::string shape)
{
    if(primitiveCount != 0)
    {
        int index = -1;
        for(int i = 0;i < primitiveCount;i++)
        {
            if(primitives[i].getShape() == shape)
            {
                index = i;
                break;
            }
        }
        if(index == -1)
            std::cout << "Primitive not found"<<std::endl;
        else
        {
            for(int i = index;i < primitiveCount - 1;i++)
            {
                primitives[i] = primitives[i+1];
            }
            primitiveCount--;
        }
    }
    else
        std::cout << "No primitives to delete"<<std::endl;

}

void openGLWindow::setPrimitives(openGLPrimitive* p)
{
    primitives = p;//shallow copy
}

openGLPrimitive* openGLWindow::getPrimitives(){return primitives;}
std::string openGLWindow::toString()
{
    std::string s ="";
    s+="OpenGL window "+intToString(getWidth())+"x"+intToString(getHeight())+":\n";
    for(int i = 0;i < primitiveCount;i++)
    {
        if(primitives != NULL)
            s+="    ";
            s+=primitives[i].toString();
    }
    return s;

}