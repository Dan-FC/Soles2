
#include "Soles.cpp"
#include "Usuario.cpp"
#include "Restaurante.cpp"
#include "Publicacion.cpp"
#include <iostream>
#include <vector>



int main() {
    std::string nombre;
    std::string password;
    std::string correo;
    std::string title;
    std::string desc;

    Restaurante restaurante("Restaurante test", "Restaurante 1 correo", "Restaurante 1 password");
    Soles soles;

    int opcion = 0;
    // hacer funcion de login o registro mediante un loop

    while(opcion != 3){
        std::cout << "Bienvenido a Soles" << std::endl;
        std::cout << "1. Crear Cuenta" << std::endl;
        std::cout << "2. Logearse" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;
        std::cout << std::endl;
        

        switch (opcion) {
            case 1:
                // Crear cuenta
                std::cout << "Ingrese su nombre: ";
                std::cin >> nombre;
                std::cout << "Ingrese su password: ";
                std::cin >> password;
                std::cout << "Ingrese su correo: ";
                std::cin >> correo;

                // crear usuario Restaurante
                restaurante.editarPerfil(nombre,correo,password);

                // anadir usuario a soles
                soles.incluir(restaurante);

                // //mostrar usuarios
                soles.print();
                std::cout << std::endl;

                break;
            case 2:
                // Logearse si ya tiene cuenta creada crear publicacion
                // ingresar usuario y contrasena

                std::cout << "Ingrese su nombre: ";
                std::cin >> nombre;
                std::cout << "Ingrese su password: ";
                std::cin >> password;

                // Verificar si ya tiene cuenta creada en el vector de usuarios
                // si no tiene cuenta creada decirle que cree una cuenta
                if(soles.validarUsuario(nombre, password)){
                    std::cout << "Usuario encontrado" << std::endl;
                    // crear publicacion
                    std::cout << "Ingrese el titulo de la publicacion: ";
                    std::cin >> title;
                    std::cout << "Ingrese la descripcion de la publicacion: ";
                    std::cin >> desc;
                    std::cout << std::endl;
                    Publicacion p1(nombre, title, desc);
                    // anadir publicacion a usuario
                    restaurante.addPublicacion(p1);
                    // mostrar publicaciones
                    restaurante.mostrarPublicaciones();
                    std::cout << std::endl;
                } else {
                    std::cout << "Usuario no encontrado" << std::endl;
                    std::cout << std::endl;
                }

                break;
            case 3:
                // Salir
                opcion = 3;
                break;
            default:
                std::cout << "Opcion invalida" << std::endl;
                break;
        }
    }



}