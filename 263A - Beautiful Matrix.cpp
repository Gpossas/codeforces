#include <iostream>
#include <stdlib.h>

void findNumberOne(int *m, int *n, int matrix[5][5]){
    for (int j = 0; j < 5; j++){
        for(int i = 0; i < 5; i++){
            std::cin >> matrix[j][i];
            if (matrix[j][i] == 1){
                *m = j;
                *n = i;
                return;
            }
        }
    }
    return;
}

int main(void){
    int matrix[5][5];
    int moved;

    int m, n;
    findNumberOne(&m, &n, matrix);
    
    moved = abs((2 - m)) + abs((2 - n));
    std::cout << moved;
}