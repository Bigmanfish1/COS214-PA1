#include "vulkanWindow.h"
vulkanWindow::vulkanWindow()
{
    primitiveCapacity = 9;
    primitiveCount = 0;
    primitives = new vulkanPrimitive[primitiveCapacity];
}
vulkanWindow::vulkanWindow(int w,int h):Window(w,h)
{
    primitiveCapacity = 9;
    primitiveCount = 0;
    primitives = new vulkanPrimitive[primitiveCapacity];
}
void vulkanWindow::addPrimitive(vulkanPrimitive& p)
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
void vulkanWindow::removePrimitive(std::string shape)
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
void vulkanWindow::setPrimitives(vulkanPrimitive* p)
{
    primitives = p;//shallow copy
}
vulkanPrimitive* vulkanWindow::getPrimitives(){return this->primitives;}
std::string vulkanWindow::toString()
{
    std::string s ="";
    s+="vulkan window "+intToString(getWidth())+"x"+intToString(getHeight())+":\n";
    for(int i = 0;i < primitiveCount;i++)
    {
        if(primitives != NULL)
        {
            s+="    ";
            s+=primitives[i].toString();

        }
            
    }
    return s;
}
