#include <iostream>

bool isLuckyNumber(int number);
bool isAlmostLucky(int number);

int main(){
    int number;
    std::cin >> number;

    isAlmostLucky(number) ? std::cout << "YES": std::cout << "NO";
    
    return 0;
}

bool isAlmostLucky(int number){
    for (int i = 1; i <= 10000; i++){
        if (isLuckyNumber(i)){
            if (number % i == 0){
                return true;
            }
        } 
    }

    return false;
}

bool isLuckyNumber(int number){
    while (number != 0){
        if (number % 10 != 4 && number % 10 != 7){
            return false;
        }
        
        number /= 10;
    }

    return true;
}