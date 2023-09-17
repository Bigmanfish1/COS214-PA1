#ifndef MOMENTO_H
#define MOMENTO_H

class Momento
{
private:
    
public:
    Momento();
    virtual Momento* restore() =0;

    ~Momento();
};



#endif