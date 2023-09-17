#include <iostream>
#include "Fantasma.h"

/* NOTA AL LECTOR:
 * ¿Por qué no hay ninguna precondición declarada?
 *
 * Recuerden que las precondiciones, como el nombre indica,
 * declaran condiciones que se deben cumplir para que la
 * función / método funcione de la forma esperada, y genere
 * el resultado esperado.
 *
 * Como me aseguré de que no haya NINGUNA condición sobre los
 * parámetros, no necesito declarar ninguna precondición.
 */

int main() {
    Fantasma fantasma;
    fantasma.saludar();

    std::string pregunta;
    while (pregunta != "salir") {
        std::cout << "Pregunta captada por el Fantasma: ";
        getline(std::cin >> std::ws, pregunta);
        if (pregunta != "salir") {
            fantasma.recibirPregunta(pregunta);
        }
    }

    fantasma.despedir();
    return 0;
}