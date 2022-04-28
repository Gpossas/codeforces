#include <iostream>
#include <string>

int main(void){
    int n_magnets;
    std::cin >> n_magnets;

    std::string standard_magnet;
    std::cin >> standard_magnet;
    int count = 1;
    for (int i = 0; i < n_magnets - 1; i++){
        std::string new_magnet;
        std::cin >> new_magnet;

        if (new_magnet.compare(standard_magnet) != 0){
            standard_magnet = new_magnet;
            count++;
        }
    }

    std::cout << count;
    
    return 0;
}