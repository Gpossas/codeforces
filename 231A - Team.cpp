#include <iostream>
 
int main(void){
    int n;
    std::cin >> n;
 
    //take inputs from the participants and count the number of problems that will be solved
    int problems = 0;
    for (int i = 0; i < n; i++){
        int p, v, t;
        std::cin >> p >> v >> t;
        if (p + v + t >= 2) 
            problems++;
    }
    
    std::cout << problems;
}