
#include<iostream>
#include "observer.h"
#include "subject.hpp"

class ObserverPerson : public Observer{

    void notification(Message* message){

        std::cout<<"Message in OBserverPerson "<<message->get_message_str()<<std::endl;
    }
};

class ObserverRadio : public Observer{

    void notification(Message* message){

        std::cout<<"Message in OBserverRadio "<<message->get_message_str()<<std::endl;
    }
};

Message::Message(std::string message){

    this->_message = message;
}

void Message::set_message_str(std::string message){

    this->_message = message;
}
std::string Message::get_message_str(){

    return this->_message;
}


int main(){

    Notify_Subject notify_sub_1;
    Notify_Subject notify_sub_2;

    Observer *person1 = new ObserverPerson();
    Observer *person2 = new ObserverPerson();

    Observer *radio1 = new ObserverRadio();
    Observer *radio2 = new ObserverRadio();

    notify_sub_1.add_observer(person1);
    notify_sub_1.add_observer(radio1);

    notify_sub_2.add_observer(person2);
    notify_sub_2.add_observer(radio2);

    Message *message1 = new Message("Hello message!");
    Message *message2 = new Message("Hello message 2!");

    notify_sub_1.set_message(message1);
    notify_sub_2.set_message(message2);

    notify_sub_1.notify();
    notify_sub_2.notify();

    delete message1;
    delete message2;
    delete person1;
    delete person2;
    delete radio1;
    delete radio2;
}