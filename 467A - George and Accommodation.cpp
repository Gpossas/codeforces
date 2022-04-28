#include <iostream>

int main(void){
    int numberRooms;
    std::cin >> numberRooms;

    int roomsBothCanMove = 0;
    for (int i = 0; i < numberRooms; i++){
        int peopleLiving, roomsCapacity;
        std::cin >> peopleLiving >> roomsCapacity;

        if (roomsCapacity - peopleLiving >= 2)
            roomsBothCanMove++;
    }

    std::cout << roomsBothCanMove;

    return 0;
}