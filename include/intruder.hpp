#include <iostream>
#include <string>
#include <vector>
#include <map>

class Intruso{
    std::vector<std::pair<std::map<char, std::pair<char, char>>, std::vector<char>>> pass_storage;

    public:
        void set_senha_vazada(std::string leaked);
        std::string crack_senha();
};