#include <iostream>

int main(){
    long long n;
    std::cin >> n;

    int luckyNumbersCount = 0;
    while(n != 0){
        if (n % 10 == 4 || n % 10 == 7)
            luckyNumbersCount++;
        n /= 10;
    }

    (luckyNumbersCount == 4 || luckyNumbersCount == 7)
    ? std::cout << "YES"
    : std::cout << "NO";
}