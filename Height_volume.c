#include<stdio.h>
/* Name:SADAM ABDI MUHUMED 
REG:CT101/G/29275/25
Description assignment of week 1
*/
int main()
{
float height;
float radius ;
float volume ;
const PI=3.14159;
float surfacearea;
printf ("Enter height %f ,height ");
scanf ("%f", &height);
printf ("Enter radius %f ,radius ");
scanf ("%f",&radius);

volume=PI*radius*radius*height;
surfacearea=2*PI*radius*radius + 2*PI*radius*height;

printf("volume: %f\n",volume);

printf("surfacearea:%f",surfacearea);

 
 
  return 0; 
  } 
  
    