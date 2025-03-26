#include<iostream>
#include "singleton.h"

int main(){

    Singleton* first_instance = Singleton::instance("first");
    Singleton* second_instance = Singleton::instance("second");

    Singleton* get_first = Singleton::instance("first");

    
    return 0;
}