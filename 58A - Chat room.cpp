// array A: [a][h][h][e][l][l][l][l][l][o][o][u] iterate through i
// array to check if letters appears = [h][e][l][l][o] index = 0, if we found then move to prox
// if index is 5, we found all letters in that array

#include <iostream>

using namespace std;

int main(void){
    string str;

    cin >> str;

    string hello = "hello";

    int index = 0;
    for (int i = 0; str[i]; i++){
        if (str[i] == hello[index])
            index++;
    }

    if (index >= 5)
        cout << "YES";
    else
        cout << "NO";
}