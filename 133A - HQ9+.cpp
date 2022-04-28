#include <iostream>

int main(void){
    std::string str;
    std:: cin >> str;

    for (int i = 0; str[i]; i++){
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
}