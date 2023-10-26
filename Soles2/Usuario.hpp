#pragma once
//Usuario es una clase abstracta que representa a un usuario del sistema.
//Se encarga de manejar la informacion de un usuario, como su nombre, su contrasenia y su correo electronico
//los metodos que son exactamente los mismos para todos sus hijos son editarPerfil, darMeGusta, quitarMeGusta, compartir, estado y puntosMonedero
//los metodos que son diferentes para cada hijo son verMeGusta y seguir

#include <iostream>
#include <string>
class Usuario{
    protected:
        std::string nombre;
        std::string correo;
        std::string password;
        bool active;
        int puntos;
    public:
        Usuario();
        ~Usuario();
        void editarPerfil(std::string, std::string, std::string);
        void darMeGusta();
        void quitarMeGusta();
        virtual int verMeGusta() = 0;
        void compartir();
        virtual void seguir() = 0;
        void estado(int);
        virtual void puntosMonedero() = 0;
        std::string getName();
        std::string getPassword();
        void mostrar();
};

