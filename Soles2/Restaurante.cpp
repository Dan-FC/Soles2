#include "Restaurante.hpp"


//crear metodos heredados por usuario polimorficos
Restaurante::Restaurante(){
}

Restaurante::~Restaurante(){
}

Restaurante::Restaurante(std::string _name, std::string _email, std::string _password){
    this->nombre = _name;
    this->correo = _email;
    this->password = _password;
    this->active = true;
    this->puntos = 0;
}

void Restaurante::seguir(){
    std::cout << "Siguiendo a " << std::endl;
}

void Restaurante::puntosMonedero(){
    std::cout << "Puntos: " << puntos << std::endl;
}

int Restaurante::verMeGusta(){
    return 0;
}

void Restaurante::addPublicacion(Publicacion _pub){
    publicaciones.push_back(_pub);
}

void Restaurante::mostrarPublicaciones(){
    for (int i = 0; i < publicaciones.size(); i++) {
        publicaciones[i].mostrar();
    }
}

