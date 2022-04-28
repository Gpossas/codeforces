#include <iostream>

using namespace std;

int main(void){
    int x;

    cin >> x;

    if (x % 5 == 0)
        cout << x / 5;
    else
        cout << x / 5 + 1;
}