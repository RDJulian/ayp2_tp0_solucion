#include "Fantasma.h"
#include "ModificadorString.h"
#include <iostream>
#include <vector>

Fantasma::Fantasma() {
    this->cantidadRespuestas = 0;
    this->mencionoMiedo = false;
}

void Fantasma::saludar() {
    std::cout << "Hola" << std::endl;
}

std::string Fantasma::invertirPalabras(std::string pregunta) {
    std::vector<std::string> palabras = ModificadorString::split(pregunta, ' ');
    for (std::string& palabra: palabras) {
        palabra = ModificadorString::invertirPalabra(palabra);
    }
    std::string resultado = ModificadorString::join(palabras, " ");
    return resultado;
}

bool Fantasma::estaPalabra(std::string oracion, std::string palabra) {
    return oracion.find(palabra) != std::string::npos;
}

void Fantasma::responderPregunta(std::string pregunta) {
    std::string preguntaLower = ModificadorString::aMinusculas(pregunta);
    if (preguntaLower == "como te llamas?" || preguntaLower == "hola, como te llamas?") {
        std::cout << "Mi nombre...No recuerdo mi nombre..." << std::endl;
    } else if (preguntaLower == "cuantos anios tenes?") {
        std::cout << "Llevo 109 años acá...Creo que morí hace bastante..." << std::endl;
    } else if (preguntaLower == "donde estas?") {
        std::cout << "Me encuentro en un limbo entre la vida y la muerte..." << std::endl;
    } else if (preguntaLower == "como estas?") {
        std::cout << "/silencio/" << std::endl;
    } else if (estaPalabra(preguntaLower, "miedo")) {
        std::cout << "/abrir_puerta/ /risa_demoníaca/" << std::endl;
        mencionoMiedo = true;
    } else if (estaPalabra(preguntaLower, "abro") ||
               estaPalabra(preguntaLower, "abre") ||
               estaPalabra(preguntaLower, "abrir")) {
        std::cout << "/agitar_puerta/" << std::endl;
    } else {
        if (pregunta.size() > LIMITE_CARACTERES) {
            std::cout << "..." << std::endl;
        } else {
            std::cout << invertirPalabras(pregunta) << std::endl;
        }
    }
}

void Fantasma::recibirPregunta(std::string pregunta) {
    if (cantidadRespuestas >= LIMITE_RESPUESTAS or mencionoMiedo) {
        std::cout << "..." << std::endl;
    } else {
        responderPregunta(pregunta);
    }
    cantidadRespuestas++;
}

void Fantasma::despedir() {
    std::cout << "Chau" << std::endl;
}