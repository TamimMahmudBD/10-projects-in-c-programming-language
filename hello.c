// Write a program to print "Hello, World!" to the console

#include<stdio.h>
int main(){
    printf("Hello World!");
    return 0 ;
}

// - Write a program to take user input and display it using `scanf` and `printf`.



// #include <stdio.h>
// int main()
// {
//     char input[100];
//     printf("enter your name:");
//     scanf("%s", input);
//     printf("Your inout is: %s\n", input);
//     return 0;
// }


// // Write a program that performs basic arithmetic operations (addition, subtraction,
// // multiplication, division)



// #include<stdio.h>
// int main(){
//     int a, b;
//     printf("Enter Your value: \n");
//     scanf("%d %d", &a, &b);
//     printf("Addition: %d\n", a+b);
//     printf("Subtraction: %d\n", a-b);
//     return 0;
// }



// // Write a program to calculate the area of a circle given the radius.

// #include<stdio.h>
// #define PI 3.1416

// int main(){
//     float redius, area;
//     printf("Enrer the redius:");
//     scanf("%f", &redius);
//     area = PI * redius * redius;
//     printf("Outout is : %.2f\n", area);
//     return 0;
// }



// // Write a program to convert temperature from Celsius to Fahrenheit and vice versa.


// #include <stdio.h>

// int main() {
//     int choice;
//     float temp;

//     printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ");
//     scanf("%d", &choice);

//     if (choice == 1) {
//         printf("Enter Celsius: ");
//         scanf("%f", &temp);
//         printf("%.2f Celsius = %.2f Fahrenheit\n", temp, (temp * 9 / 5) + 32);
//     } else if (choice == 2) {
//         printf("Enter Fahrenheit: ");
//         scanf("%f", &temp);
//         printf("%.2f Fahrenheit = %.2f Celsius\n", temp, (temp - 32) * 5 / 9);
//     } else {
//         printf("Invalid choice!\n");
//     }

//     return 0;
// }















// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter Your Number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0){
//         printf("THis is Even Number %d\n", num);
//     } else {
//         printf("This is odd number %d\n", num);
//     }
    
//     return 0;
// }


// #include <stdio.h>
// int main() {
//  int num;
//  printf("Enter a number: ");
//  scanf("%d", &num);

//  if (num % 2 == 0) {
//  printf("%d is even\n", num);
//  } else {
//  printf("%d is odd\n", num);
//  }

//  return 0;
// }






// #include <stdio.h>
// #define PI 3.14159
// int main() {
//  float radius, area;
//  printf("Enter the radius of the circle: ");
//  scanf("%f", &radius);
//  area = PI * radius * radius;
//  printf("The area of the circle is: %.2f\n",
// area);
//  return 0;
// }





// #include <stdio.h>
// int main() {
//  int a, b;
//  printf("Enter two numbers: ");
//  scanf("%d %d", &a, &b);
//  printf("Addition: %d\n", a + b);
//  printf("Subtraction: %d\n", a - b);
//  return 0;
// }






// #include <stdio.h>
// int main()
// {
//     int age; 
//     printf("Enter your age: ");
//     scanf("%d", &age); 
//     printf("You are %d years old!\n", age); 
//     return 0;
// }

// #include <stdio.h>
// int main() {

//  char input[100];
//  printf("Enter some text: ");
//  scanf("%s", input);
//  printf("You entered: %s\n", input);

//  return 0;
// }
