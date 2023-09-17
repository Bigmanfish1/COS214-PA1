#ifndef Window_H
#define Window_H
#include <string>
#include <iostream>
class Window 
{
    public:
        int screenheight;
        int screenwidth;
        int primitiveCount;
        int primitiveCapacity;
        Window(int,int); 
        Window();
        int getWidth();
        int getHeight();
        int getPCount();
        int getPCapacity();
        void setW(int);
        void setH(int);
        void setCap(int);
        void setCount(int);
        virtual std::string toString() = 0;
    protected:
        std::string intToString(int d);
        std::string floatToString(float d);


};
#endif