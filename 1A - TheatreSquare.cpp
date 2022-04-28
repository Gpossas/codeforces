#include <stdio.h>
 
int main(void){
    long long n, m, a, res;
    scanf("%lld %lld %lld", &n, &m, &a);
 
    if (n % a == 0) //flagstones cover the surface exactly
        res = n / a;
    else 
        res = n / a + 1; //cover the surface larger
    
    //check other side  
    if (m % a == 0)
        res = res * (m / a);
    else    
        res = res * (m / a + 1); 
 
    printf("%lld", res);
    return 0;
 
}