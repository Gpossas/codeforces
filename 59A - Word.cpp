#include <iostream>
#include <cctype>

using namespace std;

int main(void){
    string s;

    cin >> s;

    int upperLetters = 0, lowLetters = 0;

    for (int i = 0; s[i]; i++){
        if (isupper(s[i]))
            upperLetters++;
        else    
            lowLetters++;
    }

    if (upperLetters > lowLetters){
        for (int i = 0; s[i]; i++){
            cout << (char) toupper(s[i]);
        }
    }
    else 
        for (int i = 0; s[i]; i++){
            cout << (char) tolower(s[i]);
        }
}