#include <iostream>

using namespace std;

int main(void){
    string s, convertedString;

    cin >> s;

    int i = 0;
    while (s[i]){
        s[i] = tolower(s[i]);

        if (s[i] != 'a' && s[i] != 'e'&& s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            convertedString = convertedString + '.' + s[i];
        }

        i++;
    }

    cout << convertedString;
}