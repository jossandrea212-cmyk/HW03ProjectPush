#include <stdio.h>
#include "suma.h"
#include "area.h"

int main() {
    int opcion;
    int num1, num2;
    float radio;
    do {
        printf("Elija una opción:\n");
        printf("1. Sumar\n");
        printf("2. Calcular el área de un círculo\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                printf("Ingrese el primer número: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo número: ");
                scanf("%d", &num2);
                printf("El resultado de la suma es: %d\n", sumar(num1, num2));
                break;
            case 2:
                printf("Ingrese el radio del círculo: ");
                scanf("%f", &radio);
                printf("El área del círculo es: %.2f\n", calcular_area(radio));
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción incorrecta, intente nuevamente.\n");
        }
    } while(opcion != 3);
    return 0;
}
