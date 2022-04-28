#include <iostream>

int main(void){
    int peopleAsked;
    std::cin >> peopleAsked;

    for (int i = 0; i < peopleAsked; i++){
        int answer;
        std::cin >> answer;
        if (answer == 1){
            std::cout << "HARD";
            return 0;
        }
    }

    std::cout << "EASY";    
    return 0;
}