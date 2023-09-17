#ifndef ALGO2_DOBLE_PUNTEROS_MODIFICACIONSTRING_H
#define ALGO2_DOBLE_PUNTEROS_MODIFICACIONSTRING_H

#include <string>
#include <vector>

class ModificadorString {

public:
    // Post: Divide la cadena inicial en base al delimitador.
    static std::vector<std::string> split(std::string cadena, char delimitador);

    // Post: Genera un string a partir de la union de las palabras y el separador.
    // Si no hay palabras, devuelve un string "vacio".
    static std::string join(std::vector<std::string> palabras, std::string separador);

    // Post: Devuelve la cadena en minusculas.
    static std::string aMinusculas(std::string cadena);

    // Post: Invierte el orden de los caracteres de la palabra.
    static std::string invertirPalabra(std::string palabra);
};

#endif