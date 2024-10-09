// - Write a program to find the largest of three numbers using `if-else`.

#include <stdio.h>
int main(){
    int a, b, c;
    printf ("Enter your three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is largest number", a);
    } else if(b>a && b>c){
        printf("%d is largest number", b);
    } else{
        printf("%d largest number", c);
    }
    return 0;
}