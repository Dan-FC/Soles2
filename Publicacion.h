#pragma once

#include <iostream>
#include "Restaurante.h"

class Publicacion{
    private:
        Restaurante autor;
        std::string titulo;
        std::string descripcion;
        int meGusta;

    public:
        Publicacion();
        Publicacion(Restaurante, std::string, std::string);

        ~Publicacion();
        
        void setMeGusta();
        int getMeGustas();
        void mostrar();
};

