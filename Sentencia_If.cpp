/* La sEntencia If
 *
 * if (Condicion)
 *      Accion
 *
 *
 * */

// Pruebas de Divisibilidad

#include <stdio.h>

int main() {
    int N1, N2;

    printf("Digitar los siguientes 2 numeros: ");
    scanf("%i %i", &N1, &N2);

    if (N1 % N2 == 0 )
    {

        printf("El numero %i es divisible entre %i",N1, N2);

    }

    return 0;
}
