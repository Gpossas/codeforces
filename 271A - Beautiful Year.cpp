#include <iostream>

#define YEAR_DIGITS 4

bool hasUniqueDigits(int year);

int main(void){
    int year;
    scanf("%d", &year);

    do{
        year++;
    }
    while(!hasUniqueDigits(year));
    
    printf("%d", year);
}

bool hasUniqueDigits(int year){
    while(year != 0){
        int digit = year % 10;
        int yearCopy = year / 10;

        while(yearCopy != 0){
            int digitCopy = yearCopy % 10;

            if (digit == digitCopy){
                return false;
            }

            yearCopy /= 10;
        }

        year /= 10;
    }

    return true;
}