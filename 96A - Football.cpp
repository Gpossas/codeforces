#include <iostream>

using namespace std;

//restart count if other team is found
int main(void){
    string playersPositions;

    cin >> playersPositions;

    int i = 0, count = 0, length = playersPositions.size();

    while (playersPositions[i]){
        if (playersPositions[i] == '0'){

            //check 7 "team 0"
            for (int j = i; j <= length; j++){
                //break and start where position if we find other team player
                if (playersPositions[j] == '1' || j >= length){
                    count = 0;
                    i = j;
                    break;
                }

                count++;
                
                if (count >= 7){
                    cout << "YES";
                    return 0;
                }
            }
        }
        else {
            for (int j = i; j <= length; j++){
                if (playersPositions[j] == '0' || j >= length){
                    count =  0;
                    i = j;
                    break;
                }

                count++;
                
                if (count >= 7){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }

    cout << "NO";
}