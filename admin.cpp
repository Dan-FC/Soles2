#include "admin.hpp"
#include <iostream>

Admin::Admin(const std::vector<std::string>& reportes) {
    this->reportes = reportes;
}
void Admin::bloquearUsuario(Usuario& usuario) {
    usuario.Estado(0);
}
void Admin::borrarPublicacion(Publicacion& publicacion){
    ~publicacion;
}
Admin::~Admin() {
    reportes.clear();
    reportes.shrink_to_fit();
}