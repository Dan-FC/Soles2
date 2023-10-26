#pragma once
#include "Publicacion.hpp"

Publicacion::Publicacion(){
}

Publicacion::Publicacion(std::string _autor, std::string _title, std::string _desc){
    this->autor = _autor;
    this->title = _title;
    this->desc = _desc;
}

Publicacion::~Publicacion(){}
        
void Publicacion::addLike(){
    this->like = like+1;
}

int Publicacion::getLikes(){
    return like;
}

void Publicacion::mostrar(){
    std::cout << autor << ": "<< std::endl;
    std::cout << title << std::endl;
    std::cout << desc << std::endl;
    std::cout << "Me Gusta: " << like << std::endl;
}
