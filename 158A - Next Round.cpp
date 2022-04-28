#include <iostream>
 
int main(void){
    int n, k; 
    std::cin >> n >> k;
 
    int a[n];
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
 
    int advance = 0;
    for (int i = 0; i < n; i++){
        if (a[i] >= a[k-1] && a[i] > 0)
            advance++;
    }
    
    std::cout << advance;   
}