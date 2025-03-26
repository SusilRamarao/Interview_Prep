#include<string>

class Message{

    public:
        Message(std::string);
        void set_message_str(std::string);
        std::string get_message_str();
    private:
        std::string _message;
};