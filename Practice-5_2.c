#include<stdio.h>

float Area_rectangle(float length,float breadth);

int main(){

    float length;
    float breadth;
    printf("Enter length: ");
    scanf("%f",&length);
    printf("Enter Breadth: ");
    scanf("%f",&breadth);

    printf("Area of Rectangle is: %f\n",Area_rectangle(length,breadth));

    return 0;

}

float Area_rectangle(float length,float breadth){
    return length*breadth;
}