# include <stdio.h>
int main( )
{
         FILE *fp ;
         char data[50] ;
         printf( "Opening the file test.c in read mode" ) ;
         fp = fopen( "test.c", "r+" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c" ) ;
                 return 1;
         }
         printf( "Reading the file test.c" ) ;
         while( fgets ( data,5, fp ) != NULL )
         printf( "%s" , data ) ;
         printf("Closing the file test.c") ;
         fclose(fp) ;
         return 0;
}