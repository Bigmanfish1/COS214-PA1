#ifndef Json_H
#define Json_H
#include "consumer.h"
class jsonConsumer:public Consumer
{
    public:
        virtual std::string parseData(std::string);
};

#endif