#include <iostream>

int main(void){
    int n;
    std::string str;
    std::cin >> n >> str;

    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++){
        (str[i] == 'A') ? anton++ : danik++;
    }

    if (anton > danik){
        std::cout << "Anton";
    }
    else if (danik > anton){
        std::cout << "Danik";
    }
    else{
        std::cout << "Friendship";
    }

    return 0;
}