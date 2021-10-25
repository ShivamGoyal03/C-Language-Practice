// Practice Questions 
// Objective : Write program using C 
//1.    To convert temperature from Fahrenheit to Celsius.
//2.    To find Compound Interest.
//3.    To swap two numbers
//4.    To calculate the volume of sphere
//5.    To print area of a circle.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    // 1. To convert temperature from Fahrenheit to Celsius.
    float fahrenheit, cel;
    printf("Enter temperture in f\n");
    scanf("%f",&fahrenheit);
    cel = (fahrenheit - 32) * 5.0/9;
    printf("Value of Temperature in Celsius is %f\n",cel);
    
    // 2. To find Compound Interest.
    float ci, pi, time, rate;
    int result;
    printf("Enter Principle Amount\n");
    scanf("%f",&pi);
    printf("Enter rate\n");
    scanf("%f",&rate);
    printf("Enter time\n");
    scanf("%f",&time);
    result = (pow((1+rate/100),time));
    ci = pi * result;
    printf("Compound Interest is %f\n", ci);
    
    //3. To swap two numbers
    int a, b, temp;
    printf("Enter 1st Number\n");
    scanf("%d",&a);
    printf("Enter 2nd Number\n");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("Value of 1st Number is %d\n",a);
    printf("Value of 2nd Number is %d\n",b);

    //4. To calculate the volume of sphere
    int r;
    float vol;
    printf("Enter radius of circle\n");
    scanf("%d",&r);
    vol = (1.33 * 3.14 * r * r * r);
    printf("Volume of sphere is %f\n",vol);

    //5. To print area of a circle.
    int r2;
    float ans;
    printf("Enter radius of circle\n");
    scanf("%d",&r2);
    ans = (3.14 * r * r);
    printf("Area of Circle is %f\n",ans); 
    return 0;
}