#include <iostream>
#include <ctype.h>

int main(void){
    std::string word;
    std::cin >> word;

    word[0] = toupper(word[0]);
    
    std::cout << word;
}