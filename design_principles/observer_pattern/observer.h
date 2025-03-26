#pragma once

#include "message.h"

class Observer{

    public:
        virtual void notification(Message*) = 0;
        virtual ~Observer(){

        }
};