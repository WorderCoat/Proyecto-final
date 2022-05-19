#include <iostream>
#include <string>

using namespace std;
int Opcion;
int R = 1;
int T = 2;
bool sino;
struct citadental {
    string nombre;
    string hora;
    string tratamiento;
    float precio;
    string cantidadtrata;
    float total;
};
int main()
{
    if (R == 1) {
        while (T == 2) {
            system("cls");
            cout << "Bienvenido a este programa de citas dentales,porfavor seleccione una opcion del 1 al 5" << endl;
            cout << "1.-Agendar cita" << endl;
            cout << "2.-Modificar cita" << endl;
            cout << "3.-Elminar cita" << endl;
            cout << "4.-Lista de citas" << endl;
            cout << "5.-Salir del programa" << endl;
            cin >> Opcion;
            system("cls");
            switch (Opcion) {
            case 1: {
                citadental numcita[3];
                for (int i = 0;i < 3;i++) {
                    cout << "Ingrese el nombre completo del paciente" << endl;
                    cin.ignore();
                    getline(cin, numcita[i].nombre);
                    cout << "A que hora va a querer su cita?(En formato de 24 horas)" << endl;
                    getline(cin, numcita[i].hora);
                    cout << "Los tratamientos que ofrecemos son los siguientes:" << endl;
                    cout << "1.-Blanquiamento dental" << endl;
                    cout << "Descripcion:Su objetivo es elimnar las manchas dentales y hacer que la denticion adquiera una tonalidad mas blanca y brillante" << endl;
                    cout << "Precio unitario:$500\n" << endl;
                    cout << "2.-Carilla dentales" << endl;
                    cout << "Descripcion:Son enmascaramiento de la superficie visible del diente,con el fin de corregir problemas esteticos o patologicos" << endl;
                    cout << "Precio unitario:$1000\n" << endl;
                    cout << "3.-implantes dentales" << endl;
                    cout << "Descripcion:Producto sanitario diseñado para sustituir la raiz que falta y mantener el diente artificial en su sitio." << endl;
                    cout << "Precio unitario:$700\n" << endl;
                    cout << "Escriba el tratamiento a usar" << endl;
                    getline(cin, numcita[i].tratamiento);
                    cout << "Cuantas veces usara el tratamiento?" << endl;
                    getline(cin, numcita[i].tratamiento);
                    cout << "Cita creada,para volver presione 1" << endl;
                    cin >> sino;
                    if (1) {
                        return main();
                    };
                }
                break;
            }
            case 2: {
                cout << "Modificar cita" << endl;
                break;
            }
            case 3: {
                cout << "Eliminar Cita" << endl;
                break;
            }
            case 4: {
                cout << "Lista de citas" << endl;
                for (int j = 0;j < 3;j++) {
                    cout << "Cita #" << j + 1 << endl;
                    cout << "Nombre del paciente:" << endl;
                    system("pause");
                }
                break;
            }
            case 5: {
                cout << "Gracias por su vistia:)" << endl;
                exit(EXIT_SUCCESS);
                break;
            }
            default: {
                cout << "Su respuesta es invalida,porfavor seleccionar de nuevo un numero" << endl;
            }

            }
        }
    }
}