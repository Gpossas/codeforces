#include <iostream>
//idea: take the total sum; 
//sort array; 
//sum the biggest values until sumBiggest > total / 2. 
//and count every time sum 

void bubbleSort(int coinsValues[], int size);
int tookLargestCoinsValues(int coinsValues[], int size, int totalSum);

int main(void){
    int numberCoins;
    std::cin >> numberCoins;

    int coinsValues[numberCoins];
    int totalSum = 0;
    for (int i = 0; i < numberCoins; i++){
        std::cin >> coinsValues[i];
        totalSum += coinsValues[i];
    }

    bubbleSort(coinsValues, numberCoins);

    int minimumCoins = tookLargestCoinsValues(coinsValues, numberCoins, totalSum);

    std::cout << minimumCoins;

    return 0;
}

int tookLargestCoinsValues(int coinsValues[], int size, int totalSum){
    int sumBiggestCoinsValues = 0;
    int minimumCoins = 0; 

    //start from biggest values
    for (int i = size - 1; i >= 0; i--){
        if (sumBiggestCoinsValues <= totalSum / 2){
            sumBiggestCoinsValues += coinsValues[i];
            minimumCoins++;
        }
    }

    return minimumCoins;
}

void bubbleSort(int coinsValues[], int size){
    for (int i = 0; i < size; i++){
        int countSwaps = 0;
        for (int m = 1; m < size - i; m++){
            if (coinsValues[m - 1] > coinsValues[m]){
                int temporaryCopy = coinsValues[m];
                coinsValues[m] = coinsValues[m - 1];
                coinsValues[m - 1] = temporaryCopy;

                countSwaps++;
            }
        }

        if (countSwaps == 0)
            return;
    }
}