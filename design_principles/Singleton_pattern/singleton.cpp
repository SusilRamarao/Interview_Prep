
#include "singleton.h"

std::map<std::string, Singleton*> Singleton::instance_tracker;

Singleton* Singleton::instance(std::string singleton_name){

    if(instance_tracker.find(singleton_name) != instance_tracker.end()){

        std::cout<<"found "<<singleton_name<<std::endl;
        return instance_tracker[singleton_name];
    }

    Singleton* singleton_instance = new Singleton();
    instance_tracker[singleton_name] = singleton_instance;

    singleton_instance->initialization(singleton_name);
}

void Singleton::initialization(std::string name){

    this->_instance_name = name;
    std::cout<<"Initialized for "<<_instance_name<<std::endl;
}

Singleton::Singleton(){
    
}
Singleton::~Singleton(){

    for(auto instance : this->instance_tracker){

        std::cout<<"deleteing for "<<instance.first<<std::endl;
        delete instance.second;
    }
}