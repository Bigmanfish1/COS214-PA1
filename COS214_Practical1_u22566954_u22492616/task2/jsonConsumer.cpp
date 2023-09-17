#include "jsonConsumer.h"
std::string jsonConsumer::parseData(std::string input)
{
    std::string s = input;
    removeWord(s,"\t{\n");
    removeWord(s,"\t}\n");
    removeWord(s,"}");
    removeWord(s,"{");
    return s;
}
