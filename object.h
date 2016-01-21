#ifndef OBJECT
#define OBJECT

#include "factory.h"


class Object
{
public:
    virtual ~Object() {}

};


#define FACTORY_OBJECT Factory<Object>


#define REGISTER_OBJECT_CLASS_KEY(CLASS, KEY) \
    FACTORY_OBJECT::register_h<CLASS> __##CLASS(KEY)


#define REGISTER_OBJECT_CLASS(CLASS) \
    REGISTER_OBJECT_CLASS_KEY(CLASS, CLASS_NAME(CLASS))



#endif // OBJECT

