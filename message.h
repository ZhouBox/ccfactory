#ifndef MESSAGE
#define MESSAGE

#include "factory.h"

class Message
{

};



#define FACTORY_MESSAGE Factory<Message>


#define REGISTER_MESSAGE_CLASS_KEY(CLASS, KEY) \
    FACTORY_MESSAGE::register_h<CLASS> __##CLASS(KEY)


#define REGISTER_MESSAGE_CLASS(CLASS) \
    REGISTER_MESSAGE_CLASS_KEY(CLASS, CLASS_NAME(CLASS))


#endif // MESSAGE

