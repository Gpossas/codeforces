#include <iostream>

int main(){
    int costBanana, dollars, nBananas;
    std:: cin >> costBanana >> dollars >> nBananas;

    int total = 0;
    for (int i = 1; i <= nBananas; i++){
        total += costBanana * i;  
    }

    int borrow = (total - dollars > 0) ? total - dollars:0;
    std::cout << borrow;
}