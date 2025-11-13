/*
NAME:SADAM ABDI MUHUMED 
REG:CT101/G/29275/25
COURSE:COMPUTER SCIENCE 
TOPIC:FILES 
*/
#include <stdio.h>



int main()
{
FILE *fP= fopen("borrowed_books.txt",  "a");

char name[200];

printf("Enter the book title\t");
fgets(name,200,stdin);
name[strlen(name)-1];
printf("file added\n");
fprintf(fP, "%s", name);
fclose(fP);
    return 0;
}