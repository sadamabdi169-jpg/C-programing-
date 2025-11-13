/* NAME:SADAM ABDI MUHUMED 
REG:CT101/G/29275/25
COURSE:COMPUTER SCIENCE 
TOPIC:FILES 
*/
#include<stdio.h>
int main() {

FILE *file;
  
float amount, total =0.0;

file=fopen ("sales.txt", "r");  

if(file==NULL){           
printf ("Error:cannot open Sales.txt \n"); 

return 1;
}

else {  

printf("File opened successfully\n");

}

while(fscanf(file, "%f",&amount)==1){

 
total +=amount ;   

}  

fclose(file);

printf ("Total Sales for the Day:%.2f\n", total);

return 0;
}    
