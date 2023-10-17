#include <stdio.h>

int sumarDigitos(int numero) {
    int suma = 0;

    while (numero != 0) {
        suma += numero % 10; // Obtiene el último dígito y lo suma a 'suma'
        numero /= 10; // Elimina el último dígito
    }

    return suma;
}

int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    int resultado = sumarDigitos(numero);
    printf("La suma de los dígitos es: %d\n", resultado);

    return 0;
}
