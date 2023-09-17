#ifndef CC_H
#define CC_H
#include "jsonConsumer.h"
#include "odataConsumer.h"
class consumerCreator
{
    public:
        std::string consumerType;
        void setConsumer(std::string);
        std::string getConsumer();
        Consumer* createConsumer();

};
#endif