#include "consumerCreator.h"

void consumerCreator::setConsumer(std::string cType)
{
    if(cType == "OData")
        this->consumerType = "OData";
    else if(cType == "JSON")
        this->consumerType = "JSON";
}

std::string consumerCreator::getConsumer(){return this->consumerType;}
Consumer* consumerCreator::createConsumer()
{
    if(this->consumerType == "OData")
        return new odataConsumer();
    else if(this->consumerType == "JSON")
        return new jsonConsumer();
    else 
        return NULL;
}
