#ifndef ALGO2_DOBLE_PUNTEROS_FANTASMA_H
#define ALGO2_DOBLE_PUNTEROS_FANTASMA_H

#include <string>

class Fantasma {
    unsigned int cantidadRespuestas;
    bool mencionoMiedo;
    const size_t LIMITE_CARACTERES = 50;
    const unsigned int LIMITE_RESPUESTAS = 5;

    // Post: Responde la pregunta del usuario en base a su contenido.
    void responderPregunta(std::string pregunta);

    // Post: Invierte los caracteres de cada palabra de la pregunta, manteniendo su orden.
    std::string invertirPalabras(std::string pregunta);

    // Post: Devuelve true si la palabra está en algún lugar de la oración.
    bool estaPalabra(std::string oracion, std::string palabra);

public:
    // Constructor
    Fantasma();

    // Post: Saluda al usuario.
    void saludar();

    // Post: Recibe la pregunta del usuario y responde.
    void recibirPregunta(std::string pregunta);

    // Post: Despide al usuario.
    void despedir();
};

#endif