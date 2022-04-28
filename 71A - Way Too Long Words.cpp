#include <iostream>
 
int main(void){
    int lines;
    std::cin >> lines;

    std::string words[lines];
    
    for (int i = 0; i < lines; i++){
        std::cin >> words[i];
    }
    
    for (int i = 0; i < lines; i++){
        int lenght = words[i].size();
        
        if (lenght > 10)
            std::cout << words[i][0] << lenght - 2 << words[i][lenght-1] << std::endl;
        else
            std::cout << words[i] << std::endl;
    }
}