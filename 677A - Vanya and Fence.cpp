#include <iostream>

int main(void){
    int numberFriends, heightFence;
    std::cin >> numberFriends >> heightFence;

    int heightFriends[numberFriends];
    for (int i = 0; i < numberFriends; i++){
        std::cin >> heightFriends[i];
    }

    int width = 0;
    for (int i = 0; i < numberFriends; i++){
        (heightFence >= heightFriends[i]) ? width++ : width += 2;
    }

    std::cout << width;
    return 0;
}