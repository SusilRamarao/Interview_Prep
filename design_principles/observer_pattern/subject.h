#pragma once

//#include "message.h"
#include "observer.h"

class Subject {

    virtual void add_observer(Observer*) = 0;
    virtual void remove_observer(Observer*) = 0;
    virtual void notify()=0;
    virtual void set_message(Message*)=0;
};