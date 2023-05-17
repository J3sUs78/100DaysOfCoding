#include <iostream>
using namespace std;

string calificarEdad(int edad) {
    string calificacion;

    if (edad < 0) {
        calificacion = "Edad inválida";
    } else if (edad < 18) {
        calificacion = "Menor de edad";
    } else if (edad < 65) {
        calificacion = "Adulto";
    } else {
        calificacion = "Adulto mayor";
    }

    return calificacion;
}

int main() {
    int edad;
    cout << "Ingrese la edad: ";
    cin >> edad;

    string resultado = calificarEdad(edad);
    cout << "La calificación de la edad es: " << resultado << endl;

    return 0;
}
