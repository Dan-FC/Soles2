#include "Admin.hpp"
#include <iostream>
#include <fstream>

Admin::Admin(const std::vector<std::string>& reportes) {
    this->reportes = reportes;
}
void Admin::bloquearUsuario(Usuario& usuario) {
    usuario.Estado(0);
}
void Admin::borrarPublicacion(Publicacion& publicacion){
    delete &publicacion;
}

std::vector<std::string> getReportes(std:string nombreArchivo){
    std::vector<std::string> reporte;
    
    std::ifstream file(nombreArchivo);

    if (!file.is_open()) {
        std::cerr << "No se pudo abrir : " << nombreArchivo << std::endl;
        return reporte;
    }

    std::string line;
    
    while (std::getline(file, line)) {
        reporte.push_back(line);
    }

    file.close();
    
    return reporte

}

Admin::~Admin() {

}