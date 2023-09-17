#include "consumer.h"
std::string Consumer::printData(std::string data)
{
    return parseData(data);
}
void Consumer::removeWord(std::string& in,std::string wtr)
{
    size_t pos = in.find(wtr);
    while (pos != std::string::npos) {
        in.erase(pos, wtr.length());
        pos = in.find(wtr, pos);
    }
}