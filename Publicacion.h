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
        Publicacion(Restaurante _autor, std::string _titulo, std::string _desc);

        ~Publicacion();
        
        void setMeGusta();
        int getMeGustas();
        void mostrar();




}

