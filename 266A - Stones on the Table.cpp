#include <iostream>

int main(){
    int numberOfStones;
    std::string colors;
    std::cin >> numberOfStones >> colors;

    int removeColor = 0, length = colors.size(); 
    for (int i = 1; i < length; i++){
        if (colors[i-1] == colors[i]){
            removeColor++;
        }
    }

    std::cout << removeColor;
}