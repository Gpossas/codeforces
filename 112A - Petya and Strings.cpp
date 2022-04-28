#include <iostream>
#include <cctype>

using namespace std;

int compareStrings(char string1[], char string2[]);

int main(void){
    char string1[100], string2[100];

    cin >> string1 >> string2;

    cout << compareStrings(string1, string2);
}

int compareStrings(char string1[], char string2[]){
    int i = 0;
    while (string1[i] && string2[i]){
        //converting to lowercase
        string1[i] = tolower(string1[i]);
        string2[i] = tolower(string2[i]);

        //comapare char
        if (string1[i] > string2[i]){
            return 1;
        }
        else if (string1[i] < string2[i]){
            return -1;
        }

        i++;
    }
    
    //strings equals
    return 0;
}