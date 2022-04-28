#include <iostream>
#include <algorithm>

using namespace std;

//count if the next element is not the same
int main(void){
    string stringInput;

    cin >> stringInput;

    sort(stringInput.begin(), stringInput.end());

    int distinctCharacters = 0;
    for (int i = 0; stringInput[i]; i++){
        if (stringInput[i] != stringInput[i+1])
            distinctCharacters++;
    }

    if (distinctCharacters % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}