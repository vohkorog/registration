#pragma once
#include <string>

class User{
    private:
        std::string nickname, password;
    public:
        User();
        User(std::string nickname, std::string password);
        void setNickname(std::string nickname);
        void setPassword(std::string password);
        std::string getNickname();
        std::string getPassword();
};