#pragma once
#include <iostream>
#include <string>
class Publicacion{
    private:
        std::string autor;
        std::string title;
        std::string desc;
        int like;

    public:
        Publicacion();
        Publicacion(std::string, std::string , std::string);
        ~Publicacion();
        void addLike();
        void subLike();
        int getLikes();
        void mostrar();

};