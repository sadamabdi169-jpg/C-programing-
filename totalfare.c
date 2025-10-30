/* NAME: SADAM ABDI MUHUMED 
REG:CT101/ G/29275/25
FUNCTIONS 
*/
#include<stdio.h>
// Declaration of function to calculate Electric bill 

int calculatefare(distance ){
int fare;
fare = distance *50;// function definition 
return fare;
}
int main (){

int distance;
printf("Enter distance in KM\t");
scanf ("%d", &distance);
int totalfare;
totalfare =calculatefare(distance);// function calling 
printf ("Total fare is  ksh%d\n", totalfare);

    return 0;
}




    