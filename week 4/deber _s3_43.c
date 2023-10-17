#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0;// se determina las variables 
    int count = 0;

    while (c <= 2000) {
        if (c >= 1000 && c <= 2000) {//se determina el rango en el cual se busca encontrar los elementos de esta serie 
            count++;
            printf("%d\n", c); // Imprime los números de la serie en ese rango
        }

        a = b;
        b = c;    
        c = a + b;   // aqui se aplica la condicion de esta serie 
    }

    printf("Total de elementos en el rango [1000, 2000]: %d\n", count);

    return 0;
}
