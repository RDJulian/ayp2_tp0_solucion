#include "ModificadorString.h"
#include <sstream>

std::vector<std::string> ModificadorString::split(std::string cadena, char delimitador) {
    std::stringstream ss(cadena);
    std::string token;
    std::vector<std::string> resultado;
    while (!ss.eof()) {
        getline(ss, token, delimitador);
        resultado.push_back(token);
    }
    return resultado;
}

std::string ModificadorString::join(std::vector<std::string> palabras, std::string separador) {
    if (palabras.empty()) {
        return "";
    } else {
        std::string resultado;
        for (size_t i = 0; i < palabras.size() - 1; i++) {
            resultado += palabras[i];
            resultado += separador;
        }
        resultado += palabras[palabras.size() - 1];
        return resultado;
    }
}

std::string ModificadorString::aMinusculas(std::string cadena) {
    for (char& caracter: cadena) {
        caracter = char(tolower(caracter));
    }
    return cadena;
}

std::string ModificadorString::invertirPalabra(std::string palabra) {
    if (palabra.empty()) {
        return palabra;
    } else {
        std::string resultado;
        for (size_t i = palabra.length() - 1; i > 0; i--)
            resultado += palabra[i];
        resultado += palabra[0];
        return resultado;
    }
}