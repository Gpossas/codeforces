#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int passengersInside = 0, totalCapacity = 0;
    for (int i = 0; i < n; i++){
        int exitTram, enterTram;
        std::cin >> exitTram >> enterTram;

        passengersInside = (passengersInside - exitTram) + enterTram;

        if (passengersInside > totalCapacity)
            totalCapacity = passengersInside;
    }

    std::cout << totalCapacity;
}