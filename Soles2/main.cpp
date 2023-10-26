
#include "Soles.cpp"
#include "Usuario.cpp"
#include "Restaurante.cpp"
#include "Publicacion.cpp"
#include <iostream>
#include <vector>
#include <limits>


int main() {
    std::string nombre;
    std::string password;
    std::string correo;
    std::string title;
    std::string desc;

    Restaurante restaurante("Restaurante test", "Restaurante 1 correo", "Restaurante 1 password");
    Soles soles;

    int opcion = 0;
    // Hacer funcion de login o registro mediante un loop

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
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                getline(std::cin, nombre);

                std::cout << "Ingrese su password: ";
                getline(std::cin, password);

                std::cout << "Ingrese su correo: ";
                std::cin >> correo;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                // Crear usuario Restaurante
                restaurante.editarPerfil(nombre, correo, password);

                // Anadir usuario a soles
                soles.incluir(restaurante);

                // Mostrar usuarios
                std::cout << std::endl;
                soles.print();
                std::cout << std::endl;

                break;

            case 2:
                // Logearse si ya tiene cuenta creada crear publicacion
                // Ingresar usuario y contrasena

                std::cout << "Ingrese su nombre: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                getline(std::cin, nombre);

                std::cout << "Ingrese su password: ";
                getline(std::cin, password);

                // Verificar si ya tiene cuenta creada en el vector de usuarios
                // Si no tiene cuenta creada decirle que cree una cuenta
                if(soles.validarUsuario(nombre, password)){
                    std::cout << "Usuario encontrado" << std::endl;
                    std::cout << std::endl;

                    // Crear publicacion
                    std::cout << "Ingrese el titulo de la publicacion: ";
                    getline(std::cin, title);

                    std::cout << "Ingrese la descripcion de la publicacion: ";
                    getline(std::cin, desc);
                    std::cout << std::endl;

                    Publicacion p1(nombre, title, desc);

                    // Anadir publicacion a usuario
                    restaurante.addPublicacion(p1);

                    // Mostrar publicaciones
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