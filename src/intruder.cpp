#include <iostream>
#include "intruder.hpp"

void Intruder::set_senha_vazada(std::string leaked){
    std::map<char, std::pair<char, char>> code;
    std::vector<char> pass;
    for(int i=0;i<5;i++){
        code[char('A'+i)] = std::pair<char, char> (leaked[4*i],leaked[4*i+2]);
    }
    for(int i=10;i<16;i++){
        pass.push_back(leaked[2*i]);
    }
    pass_storage.push_back(std::pair<std::map<char, std::pair<char, char>>, std::vector<char>>(code, pass));
}