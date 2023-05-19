#include <iostream>
#include <math.h>


int main()
{

    float x,y,res,ycuadradamenosuno;

    std::cout << "Ingrese los datos solicitados";
    std::cout << "Ingrese x: ";std::cin>>x;
    IngresaYdenuevo:
    std::cout << "Ingrese Y: ";std::cin>>y;


    ycuadradamenosuno=(pow(y,2)-1);

    if (ycuadradamenosuno==0){

        std::cout<<"Elvalor de Y no es valido Ingrese nuevamente";
        std::cout<<"Ingrese valor de Y : ";
        std::cin>>y;

        goto IngresaYdenuevo;

    }

    res= (sqrt(x))/ycuadradamenosuno;

    std::cout << "El resultado de la funcion es " <<res<<"\n";

    system("pause");
    return 0;
}