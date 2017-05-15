
#include<stdio.h>
#define TABINC 8

int main(void)
{
  int nb,pos,c;

  nb = 0;
  pos = 1;
  char a[1000];
  int i=0,count=0;
  while((c=getchar())!='0')
  {
    if( c == '\t')
    {
      nb = TABINC - (( pos - 1) % TABINC);

      //while( nb > 0)
      {
        //putchar(' ');
        a[i]=' ';
        i++;
        //++pos;
        //--nb;
      }
    }
    else if( c == '\n')
    {
      //putchar(c);
      a[i]='\n';
      i++;
      pos = 1;
    }
    else 
    {
      //putchar(c);
      a[i]=c;
      i++;

      ++pos;
    }

  }
  a[i]='\0';
  count=i;
  //printf("%s\n",a );
  for (i = 0; i < count; ++i)
  {
      if(a[i]==' '&&a[i+1]==' ')
      {
        
        i++;
        int j=i;
        while(a[j]==' ')
        {
          for (int k = j; k < count; ++k)
          {
            /* code */
            a[k]=a[k+1];
          }
          
          //j++;
          count--;
        }
        
      }
        if(a[i]=='\n'&&a[i+1]=='\n')
      {
        
        i++;
        int j=i;
        while(a[j]=='\n')
        {
          for (int k = j; k < count; ++k)
          {
            /* code */
            a[k]=a[k+1];
          }
          
          //j++;
          count--;
        }
        
      }
  }
  printf("\nstring:\n%s\n",a );
  return 0;
}
