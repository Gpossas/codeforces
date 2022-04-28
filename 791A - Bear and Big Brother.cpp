#include <iostream>

int main(){
    int lWeight, bWeight;
    std::cin >> lWeight >> bWeight;

    int years = 0;
    while (lWeight <= bWeight){
        lWeight *= 3;
        bWeight *= 2;

        years++;
    }

    std::cout << years;
}