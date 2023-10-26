#pragma once
#include <iostream>
#include <vector>
#include "Usuario.hpp"

class Soles {
private:
    std::vector<Usuario *> v;
public:
    Soles();
    ~Soles();
    void print();
    // funcion para validar si existe el usuario y contrasena
    bool validarUsuario(std::string, std::string);
    std::string mostrarUsuarios();
    void incluir(Usuario&);
    //Soles operator+(Usuario&);
};