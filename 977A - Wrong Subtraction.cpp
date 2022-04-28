#include <iostream>

int main(void){
    int number, nSubtractions;
    std::cin >> number >> nSubtractions;

    for (int i = 0; i < nSubtractions; i++){
        if (number % 10 == 0){
            number /= 10;
        }
        else{
            number--;
        }
    }

    std::cout << number;
}