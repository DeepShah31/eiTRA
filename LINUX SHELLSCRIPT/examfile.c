#include <stdio.h>

int main ( int argc, char *argv[] )
{
    for (int i = 0; i < argc; ++i)
    {
    	 FILE *file = fopen( argv[i], "r" );

            char x;
            int line=0;
            
            while  ( ( x = fgetc( file ) ) != EOF )
            {
                printf( "%c", x );
            if (x=='\n' && x!=EOF)
            {
  	          	line++;
            	printf("%d\n",line);
            }
        }
            fclose( file );
    }
       
        
    
}