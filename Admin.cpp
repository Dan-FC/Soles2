#include "admin.hpp"
#include <iostream>
#include <fstream>

Admin::Admin(const std::vector<std::string>& reportes) {
    this->reportes = reportes;
}
void Admin::bloquearUsuario(Usuario& usuario) {
    usuario.Estado(0);
}
void Admin::borrarPublicacion(Publicacion& publicacion){
    ~publicacion;
}
std::vector<std::string> getReportes(std:string nombreArchivo){

}

Admin::~Admin() {
    reportes.clear();
    reportes.shrink_to_fit();
}