#include <stdio.h>

//Mostrar en la pantalla en numero n promedio primeros multiplos de 3 n 

int counter=0;


int main(int argc, char const *argv[])
{
    int n;
   
    printf("Ingresa n cantidad de multiplos a promediar: \n");
    scanf("%d",&n);

    int multiplosde3[n];

    int i=1;
    int sum;

    for (counter = 0; counter <= n;) //
    {
        if (i%3==0)
        {
            multiplosde3[counter]=i;
            sum += i; 
            counter++;
        }
        

        printf("%d\n",i);//
    }

    return 0;
}
