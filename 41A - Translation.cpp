#include <iostream>

void checkIsReversed(std::string myString, std::string reversed){
    int length = myString.size();
   
    for (int i = 0, j = length-1; myString[i]; i++, j--){
        if (myString[i] != reversed[j]){
            std::cout << "NO";
            return;
        }
    }

    std::cout << "YES";
}

int main(void){
    std::string myString, reversed;
    std::cin >> myString >> reversed;
    
    checkIsReversed(myString, reversed);

    return 0;
}