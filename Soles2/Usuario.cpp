#include "Usuario.hpp"
#include <iostream>
#include <string>

Usuario::Usuario(){
}
Usuario::~Usuario(){
}

void Usuario::editarPerfil(std::string nombre, std::string correo, std::string password){
    this->nombre = nombre;
    this->correo = correo;
    this->password = password;
}

void Usuario::darMeGusta(){
    std::cout << "Me gusta" << std::endl;
}

void Usuario::quitarMeGusta(){
    std::cout << "Quitar me gusta" << std::endl;
}

void Usuario::compartir(){
    std::cout << "Compartir" << std::endl;
}

void Usuario::estado(int estado){
   this->active = estado;
}

std::string Usuario::getName() {
    return nombre;
}

std::string Usuario::getPassword() {
    return password;
}

void Usuario::mostrar(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Correo: " << correo << std::endl;
    std::cout << "Password: " << password << std::endl;
    std::cout << "Estado: " << active << std::endl;
    std::cout << "Puntos: " << puntos << std::endl;
}
