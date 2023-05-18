#include <iostream>
using namespace std;

double calcularBeneficio(double ingresos, double gastos) {
    double beneficio = ingresos - gastos;
    return beneficio;
}

int main() {
    double ingresos, gastos;
    cout << "Ingrese el monto de ingresos: $";
    cin >> ingresos;
    cout << "Ingrese el monto de gastos: $";
    cin >> gastos;

    double beneficio = calcularBeneficio(ingresos, gastos);
    cout << "El beneficio de la empresa es: $" << beneficio << endl;

    return 0;
}
