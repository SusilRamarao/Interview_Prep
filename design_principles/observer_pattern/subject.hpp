#pragma once

#include "subject.h"
#include<set>

class Notify_Subject : private Subject{

    public:
        void add_observer(Observer* observer){

            this->_observer_set.insert(observer);
        }
        
        void remove_observer(Observer* observer){

            this->_observer_set.erase(observer);
        }

        void notify(){

            for(auto observer : this->_observer_set){

                observer->notification(this->current_message);
            }
        }

        void set_message(Message* message){

            this->current_message = message;
        }

    private:
        std::set<Observer*> _observer_set;
        Message* current_message;
};