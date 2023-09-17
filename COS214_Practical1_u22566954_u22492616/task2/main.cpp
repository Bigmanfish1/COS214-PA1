#include "consumerCreator.h"
#include <iostream>
using namespace std;
int main()
{

    string json = "{\n"
    "\tsection1\n"
    "\t{\n"
    "\t\tsubsection2\n"
    "\t\tsubitem3\n"
    "\t}\n"
    "\tsubitem4\n"
    "}";

    
    string xml = "<section>\n"
    "\tsection 1\n"
    "\t<section>\n"
    "\t\tsubsection 2\n"
    "\t\tsubitem 3\n"
    "\t</section>\n"
    "\tsubitem 4\n"
    "</section>";
    cout <<"XML data before parsing: "<<endl;
    cout << xml <<endl;

    consumerCreator cc;
    cc.setConsumer("OData");
    Consumer* c = cc.createConsumer();
    if(c != NULL)
    {
        cout << "After parsing: "<<endl;
        cout << c->printData(xml);
    }
    cout << "JSON data before parsing: "<<endl;
    cout <<endl;
    cout << json <<endl;
    cout <<endl;
    cc.setConsumer("JSON");
    c = cc.createConsumer();
    if(c != NULL)
    {
        cout << "After parsing: "<<endl;
        cout << c->printData(json);
    }


        
    return 0;
}