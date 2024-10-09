// - Write a program to check if a given year is a leap year or not using conditional statements.

#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if((year %4 ==0 && year % 100 !=0) || (year % 400 == 0)){
        printf("%d year is Leapyear", year);
    } else{
        printf("%d year is not leapyear", year);
    }
    return 0;
    
}


// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter the year");
//     scanf("%d", &year);
//     if((year %4 == 0 && year % 100 != 0) ||( year % 100 == 0) ){
//         printf("%d is leapyear", year);
//     } else{
//         printf("%d is not leapyear", year);
//     }
// }