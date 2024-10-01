#include <fstream>
#include <vector>
#include <iostream>
#include "User.hpp"

void menu(){
    std::cout<<"1 - Reg\n"<<"2 - Log\n"<<"3 - Exit\n";
}

void registration(std::fstream &fout){
    User user;
    std::string str;
    
    fout.open("../users.txt", std::ios::app);
    std::cout<<"Nickname - ";
    std::cin>>str;
    user.setNickname(str);
    std::cout<<"Password - ";
    std::cin>>str;
    user.setPassword(str);
    fout<<"\nNickname - \t"<<user.getNickname()<<"\n"<<"Password - \t"<<user.getPassword()<<"\n"<<"-------------";
    fout.close();
}

void login(std::fstream &fout){
    std::vector<std::string> vec;
    fout.open("../users.txt", std::ios::in);
    std::string inputData;
    std::string searchData;

    std::cout<<"Введите свой никнейм - ";
    std::cin>>inputData;

    while(!fout.eof()){
        searchData = "";
        
        fout>>searchData;
        
        
        if(searchData == inputData){
            std::cout<<"Вы вошли\n";
            break;
        }
        if(searchData!=inputData){
            std::cout<<"Такого пользователя нет\n";
            std::cout<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
        }
    }
    fout.close();
}

void pick(int x, std::fstream &fout){
    int choise;
    switch (x){
            case 1:
                registration(fout);
                break;
            case 2:
                login(fout);
                break;
        }
}

int main(){
    std::fstream fout;
    int choise;
    do{
        menu();
        std::cin>>choise;
        pick(choise, fout);
    }while(choise != 3);
}