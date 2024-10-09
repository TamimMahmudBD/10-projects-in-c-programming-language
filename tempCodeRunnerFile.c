#include <stdio.h>
int main(){
    int n;
    unsigned factorial =1;
    printf("Enter the factorial number: ");
    scanf("%d", &n);
    if(n <n){
        printf("Factorial of a negative number doesn't exist.\n");
    }else{
        for(int i=1; i<= n; ++i){
                factorial *= i;
        }
        printf("factorial of %d = %11u\n", n , factorial);
    }
    return 0;
}