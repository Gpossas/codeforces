#include <iostream>

int main(){
    int childrensNumber, timeAfter;
    std::string arrangement;
    std::cin >> childrensNumber >> timeAfter >> arrangement;

    //the key is to first move boys and shift places
    //if shifted, check 2 positions after(after these 2:boy and girl)
    //else check if the next spot is a girl
    int length = arrangement.size();
    for (int j = 0; j < timeAfter; j++){ //if timeAfter is 1, we shuffle 1 time but for all boys in arrangement
        for (int i = 0; i < length - 1;){ 
            if (arrangement[i] == 'B' && arrangement[i+1] == 'G'){
                arrangement[i] = 'G';
                arrangement[i+1] = 'B';
                i += 2;
            }
            else{
                i++;
            }
        }
        //std::cout << "loop " << j+1 <<": "<< arrangement<<std::endl;   
    }

    std::cout << arrangement;
}