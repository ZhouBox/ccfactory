#include <iostream>
#include "widget.h"

using namespace std;







int main()
{
    Widget *p = static_cast<Widget*>(FACTORY_OBJECT::produce("Widget"));
    FACTORY_OBJECT::type_value* p1 = FACTORY_OBJECT::produce("Text");
    std::cout << p1;
    std::cout << "\n-----------------";
    std::cout << p;
    std::cout << "Hello World!" << std::endl;
    delete p;
    delete p1;
    return 0;
}

