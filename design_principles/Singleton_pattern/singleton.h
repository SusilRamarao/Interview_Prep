#include<iostream>
#include<map>

/**
 * @brief Below Singleton can be used as for different users, for example for 
 * each user a separate global variable will be there and we can fetch that and get it's 
 * own singleton instance. In below example I am simply passing the string to create new instance 
 * of Singleton and to fetch as well using lookup.
 * 
 * Purpose of singleton is we can create one instance and access it via 
 * global pointer everywhere. Like for parsing a file where we can use the parsed content accessible 
 * everywere. Another use is singleton instances can be created based on a user profile.
 *  ===> For example each user has it's own preference on how they decorate their windows, like alinging 
 *       tabs and subwindows. etc.. So each view preference can be stored in a separate singleton instance.
 *  ===> Spooling software, multiple machines but one user contains data his/her documents.
 */
class Singleton{

    public:
        static Singleton* instance(std::string);
    private:
        static std::map<std::string, Singleton*> instance_tracker;

        void initialization(std::string);
        std::string _instance_name;
    protected:
        Singleton();
        ~Singleton();
};