#include "User.hpp"

User::User(std::string nickname, std::string password){
        this->password = password;
        this->nickname = nickname;
}
User::User(){

}
void User::setNickname(std::string nickname){
    this->nickname = nickname;
}
void User::setPassword(std::string password){
    this->password = password;
}
std::string User::getNickname(){
    return nickname;
}
std::string User::getPassword(){
    return password;
}

