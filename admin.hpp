#pragma once

#include <string>
#include <vector>

class Admin {
private:
    std::vector <std::string> reportes;
public:

    Admin(const std::vector std<string>& reportes);
    void bloquearUsuario(Usuario& usuario);
    void borrarPublicacion(Publicacion& publicacion);
};

