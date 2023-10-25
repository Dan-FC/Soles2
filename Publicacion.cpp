#pragma once
#include "Publicacion.h"

Publicacion::Publicacion(){
    autor = "";
    titulo = "";
    descripcion = "";
    meGusta = 0;
}

Publicacion::Publicacion(Restaurante _autor, std::string _titulo, std::string _desc){
    this->autor = _autor;
    this->titulo = _titulo;
    this->descripcion = _desc;
}

Publicacion::~Publicacion(){}
        
void Publicacion::setMeGusta(int _meGusta){
    this->meGusta = _meGusta;
}

int Publicacion::getMeGustas(){
    return meGusta;
}

void Publicacion::mostrar(){
    std::cout << autor.getNombre() << ": "<< endl;
    std::cout << titulo << endl;
    std::cout << descripcion << endl;
    std::cout << "Me Gusta: " << meGusta << endl;
}