#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Usuario.hpp"
#include "Publicacion.hpp"  // Make sure this file exists and is correctly defined

class Restaurante : public Usuario{
    protected:
        std::vector<Publicacion> publicaciones;  // Publicacion should be a defined class
    public:
        Restaurante();
        ~Restaurante();
        Restaurante(std::string, std::string, std::string);

        int verMeGusta();
        void seguir();
        void puntosMonedero();
        std::string getName();
        void addPublicacion(Publicacion);  // Publicacion should be a defined class
        void mostrarPublicaciones();
};
