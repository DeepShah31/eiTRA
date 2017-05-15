#include <stdio.h>
#include <string.h>
#include "header.h"   /* header file where C structure is 
                            declared */
 
int main() 
{
 
   record.id=1;
   strcpy(record.name, "Raju");
   record.percentage = 86.5;
 
   printf(" Id is: %d \n", record.id);
   printf(" Name is: %s \n", record.name);
   printf(" Percentage is: %f \n", record.percentage);
   return 0;
}