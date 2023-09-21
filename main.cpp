#include <iostream>
#include "Fantasma.h"

/* NOTA AL LECTOR:
 * ¿Por qué no hay ninguna precondición declarada?
 * Recuerden que las precondiciones, como el nombre indica,
 * declaran condiciones que se deben cumplir para que la
 * función / método funcione de la forma esperada, y genere
 * el resultado esperado.
 *
 * Como me aseguré de que no haya NINGUNA condición sobre los
 * parámetros, no necesito declarar ninguna precondición.
 *
 * ¿Por qué no hay un Menu?
 * Decidí no abstraer un Menu porque la lógica es muy acotada
 * y el main me queda, básicamente, como el control del flujo
 * del programa. El que abstrajo la clase cumpliendo el
 * paradigma, está bien.
 *
 * ¿Por qué las preguntas o las palabras clave no son constantes?
 * En mi opinión, tener una constante MIEDO = "miedo" no aporta
 * nada a nivel legibilidad. Lo mismo si estoy haciendo un cout
 * de un string. Se sobreentiende que está imprimiendo por
 * pantalla ese mensaje. El que usó constantes, más que bien.
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