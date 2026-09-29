#include <stdio.h>
#include "definirfunciones.h"
void mostrarMenu();

int main() {
    int opcion;
    do {
        mostrarMenu();
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                int a, b;
                printf("Ingrese un número: ");
                scanf("%d", &a);
                printf("Ingrese otro número: ");
                scanf("%d", &b);
                printf("La suma es: %d\n", sumar(a, b));
                break;
            }
            case 2: {
                float base, altura;
                printf("Ingrese la base: ");
                scanf("%f", &base);
                printf("Ingrese la altura: ");
                scanf("%f", &altura);
                printf("El área del triángulo es: %.2f\n", areatriangulo(base, altura));
                break;
            }
            case 3: 
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}

void mostrarMenu() {
    printf("\n--- Menú ---\n");
    printf("1. Sumar\n");
    printf("2. Calcular el área de un triángulo\n");
    printf("3. Salir\n");
}
