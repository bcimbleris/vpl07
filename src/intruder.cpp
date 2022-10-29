#include <iostream>
#include "intruder.hpp"

void Intruder::set_pass_vazada(std::string leaked){
    
    std::map<char, std::pair<char, char>> code;
    std::vector<char> pass;
    
    for(int i=0;i<5;i++)
    {
        
        code[char('A'+ i)] = std::pair<char, char> (leaked[4*i],leaked[4*i+2]);
    
    };

    for(int i=10;i<16;i++)
    {
        
        pass.push_back(leaked[2*i]);
    
    };
    
    pass_storage.push_back(std::pair<std::map<char, std::pair<char, char>>, std::vector<char>>(code, pass));



};

std::string Intruder::crack_senha(){
    std::pair<char, char> pass[10][10];
    std::vector<char> result;
    std::string s;
    for(int i=0; i < pass_storage.size(); i++){
        for(int z = 0; z < 6; z++){
            pass[i][z]= this->pass_storage[i].first[(this->pass_storage[i]).second[z]];
        }
    }
    for(int i=0; i<6; i++){
        bool isTrue = true;
        for(int z = 0; z < pass_storage.size()-1; z++){
            if(pass[0][i].first == pass[z+1][i].first || pass[0][i].first == pass[z+1][i].second){
                
            }
            else{
                isTrue = false;
                break;
            }
        }
        if(isTrue){

            s+=pass[0][i].first;
        
        }else{

            s+=pass[0][i].second;
        }

        s+=" ";
    }
    return s;
};