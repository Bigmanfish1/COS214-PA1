#ifndef D_H
#define D_H
#include "consumer.h"
class odataConsumer:public Consumer
{
    public:
        virtual std::string parseData(std::string);
};

#endif