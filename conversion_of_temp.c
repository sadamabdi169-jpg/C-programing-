/* NAME: SADAM ABDI MUHUMED 
REG:CT101/ G/29275/25
FUNCTIONS 
*/
#include<stdio.h>
// Declaration of function from fehreneit to celsius & function definition 

float convert_to_celsius(float tempreturefahrenheit){
 float tempreturecelsius ;
 
 tempreturecelsius =(tempreturefahrenheit-32)*5/9;
 return tempreturecelsius;
 }
 int main (){
 float tempreturefahrenheit;
 printf ("Enter tempreture in °f");
 scanf ("%f",& tempreturefahrenheit);
 
 float tempreturecelsius =convert_to_celsius (tempreturefahrenheit);// function calling 
 printf ("tempreturecelsius is %f°C", tempreturecelsius);

    return 0;
    }