#ifndef CONSUMER_H
#define CONSUMER_H
#include <string>
class Consumer
{
    protected:
        virtual std::string parseData(std::string) = 0;
        void removeWord(std::string&,std::string);
    public:
        std::string printData(std::string);
};

#endif