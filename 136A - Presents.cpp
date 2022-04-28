#include <iostream>

//1-indexed
//2 3 4 1 index to put present 
//  1       index from who put present
//ex: friend of index 1 give present to friend in index 2
//so we put in index 2 the index who gave the present

int main(void){
    int friends;
    std::cin >> friends;

    int givePresent[friends];
    int receivePresent[friends];
    for (int i = 0; i < friends; i++){
        std::cin >> givePresent[i];
        int indexWhoGivePresent = givePresent[i] - 1;
        receivePresent[indexWhoGivePresent] = i + 1;
    }

    for (int i = 0; i < friends; i++){
        std::cout << receivePresent[i] <<' ';
    }

    return 0;
}