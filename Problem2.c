#include <stdio.h>
int main(void){
    int n = 0;
    
    printf("please give me an integer \n");
    scanf("%d", &n);
    
    int denom = n - 1;
    while (n % denom != 0){
        denom --;
    }
    if (n = 1){
        printf("%d is a prime number! \n", n);
    }
    else {
        printf("%d is not a prime number \n", n);
    
    }
    return 0;
}