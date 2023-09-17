#include "openGLFactory.h"
#include "vulkanFactory.h"
using namespace std;
int main()
{
    openGLWindow w(4,4);
    
    openGLPrimitive p("Triangle",2,3);
    openGLPrimitive pg("Square",7,4);
    w.addPrimitive(p);
    w.addPrimitive(pg);
    cout << w.toString();
    w.removePrimitive(p.getShape());
    cout << w.toString();
    cout <<"Count: "<< w.primitiveCount<<endl;
    cout <<"Capacity: "<< w.primitiveCapacity<<endl;
    cout << endl;
    vulkanWindow vw(6,3);
    vulkanPrimitive vP("Rectangle",12,6);
    vw.addPrimitive(vP);
    cout << vw.toString();

    vulkanFactory f;
    Window* ow = f.createWindow();
    cout << ow->toString()<<endl;
    return 0;
}
