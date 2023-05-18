#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <vector>
using namespace std;


vector<string> agregarElemento(const vector<string>& arreglo, const string& valor) {
    vector<string> nuevoArreglo = arreglo;  // Copia el arreglo original

    if(valor.length) {

    }


    nuevoArreglo.push_back(valor);  // Agrega el nuevo valor al final del nuevo arreglo

    return nuevoArreglo;
}



int main()
{
    //Imprimiendo un string
    cout << "Hello world!"<<endl ;
    //Imprimiendo un entero
    cout<<32<<endl;

    //Definicion de una arrayList simple y limitada
    string colores[4] = { "rojo", "azul", "verde", "amarillo"};

    int longitud = sizeof(colores) / sizeof(colores[0]);

    cout<<"Lista Original: ";
    copy(colores, colores + longitud, ostream_iterator<string>(cout, " "));
    cout<<endl;

    //Imprimiendo el color del indice 0
    cout << "Mi color favorito es " << colores[0] << "." << endl;
    //Definiendo un nuevo valor en la lista en el indice 0
    colores[0] = "naranja";
    cout << "He cambiado de idea, mi color favorito ahora es " << colores[0] << "."<<endl;

    cout<<"Lista Nueva: ";
    copy(colores, colores + longitud, ostream_iterator<string>(cout, " "));
    cout<<endl;

    //Haciendo inmutable a la lista original colores[]


    // Solicitar al usuario un nuevo color
    string nuevoColor;
    cout << "Ingrese un nuevo color para la lista: ";
    cin >> nuevoColor;

    // Agregar el nuevo color al arreglo
    vector<string> arregloModificado = agregarElemento(vector<string>(colores, colores + longitud), nuevoColor);

    cout << "Lista Nueva: "<<endl;
    copy(arregloModificado.begin(), arregloModificado.end(), ostream_iterator<string>(cout, " "));
    cout<<endl;


    return 0;
}
