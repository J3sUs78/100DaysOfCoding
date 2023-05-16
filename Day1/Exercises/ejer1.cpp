
//Programa para repartir pizzas
//Indique el N°personas y el N°pizzas encargadas
//Retornar el N°trozos por persona y cuantos sobran
//Ten en cuenta que las pizzas se parten en 8 porciones

#include<iostream>
using namespace std;


int main()

{
    //info var:
    //np: number of persons
    //pizzas: number of pizzas
    //nt: trozos total
    //ntp: trozos por persona
    //nts: trozos que sobran
    int np,pizzas,nt,ntp,nts;
    cout<<"Welcome, enter the number of people: \n";
    cin>>np;
    cout<<"how many pizzas do you want: \n";
    cin>>pizzas;

    nt = pizzas*8; //nun_trozos totales
    ntp = nt/np; //n_trozos / num_persona
    nts = nt- ntp*np; 

    system("pause");
    system("cls");

    cout<<"they will play "<<ntp<<" pieces per person\n";
    cout<<nts<<" pizzas left over...";
    
    return 0;
}


