#include <iostream>

int main(){
    std::string n1, n2;
    std::cin >> n1 >> n2;

    int length = n1.size();
    std::string new_Number = "";
    for (int i = 0; i < length; i++){
        if (n1[i] != n2[i])
            new_Number += "1";
        else
            new_Number += "0";
    }

    std::cout << new_Number;
}