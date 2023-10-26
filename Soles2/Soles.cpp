#include "Soles.hpp"

Soles::Soles() {
}

Soles::~Soles() {
}

void Soles::print() {
    for (int i = 0; i < v.size(); i++) {
        v[i]->mostrar();
    }
}

std::string Soles::mostrarUsuarios() {
    std::string s = "";
    for (int i = 0; i < v.size(); i++) {
        s += v[i]->getName() + "\n";
    }
    return s;
}

bool Soles::validarUsuario(std::string _user, std::string _pass) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getName() == _user && v[i]->getPassword() == _pass) {
            return true;
        }
    }
    return false;
}

void Soles::incluir(Usuario& u) {
    v.push_back(&u);
}

//Soles Soles::operator+(Usuario& u) {