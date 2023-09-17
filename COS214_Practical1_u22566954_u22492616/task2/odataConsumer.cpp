#include "odataConsumer.h"
std::string odataConsumer::parseData(std::string data)
{
    std::string s = data;
    removeWord(s,"\t<section>\n");
    removeWord(s,"\t</section>\n");
    removeWord(s,"</section>");
    removeWord(s,"<section>");
    return s; 
}