#include <stdio.h>
#define PI 3.1416

int main(){
    float radius, area;
    printf("enter the radius of carcle:");
    scanf("%f", &radius);
     area = PI * radius * radius;
    printf("The output is %.2f\n", area);
    return 0;
}

