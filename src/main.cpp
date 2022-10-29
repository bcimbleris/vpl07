#include <iostream>
#include "intruder.hpp"

int main(){
    int num_entradas, i;
    std::string senha;
    Intruder intruder;
    
    std::cin >> num_entradas;
    std::cin.ignore();

    for(i=0; i < num_entradas; i++){
        std::getline(std::cin, senha);
        intruder.set_senha_vazada(senha);
    }
    std::cout << intruder.crack_senha() <<std::endl;
    
    return 0;
}