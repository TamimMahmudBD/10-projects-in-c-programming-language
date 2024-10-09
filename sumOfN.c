#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i  = 1; i<= n; ++i){
        sum += i;
    }
    printf("The Sum of the first %d natural number is: %d\n ", n, sum);
    return 0;
}