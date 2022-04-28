#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    
    int x = 0;
    for (int i = 0; i < n; i++){
        std::string myString;
        std::cin >> myString;

        if (myString.std::string::find_first_of('+') != std::string::npos)
            x++;
        else if(myString.std::string::find_first_of('-') != std::string::npos)
            x--;
    }
    
    std::cout << x;
}