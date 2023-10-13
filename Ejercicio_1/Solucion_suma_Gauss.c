#include <stdio.h>
#include <math.h>

int integer=0;
int count=1;
int totalnum=1;
int i;



int main(int argc, char const *argv[])
{
    printf("Welcome to the Gauss sum\n" );
    printf("Enter an integer number\n");
    scanf("%d",&integer);

    do 
    {

       if (integer > 0)
       {
         for ( i = 1; i <= integer; i++)
         {
            printf("%d\n",i);
            count = i;
            totalnum += count;
            printf("%d\n",totalnum);
            
         }
         
        printf("your result of the Glauss sum:%d\n",totalnum); 
        
       }
      else
      {
        printf("your have entered a incorrect kind of number (only positive integers)\n"); 
      }
      
        
    } while (integer < 0);
    
    return 0;
}






