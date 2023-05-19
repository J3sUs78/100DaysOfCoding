#include <iostream>
#include <cstring>


/*
This code defines several structures: HOUR, DATE, PASSENGER, and FLIGHT, which represent different 
entities related to flights and passengers.

The AddPassenger function adds a new passenger to a linked list of passengers. 
It takes the rut, name, phone, status, and PTRPASSENGER parameters. 
Creates a new Passenger object, assigns the supplied values ​​to its members, and adds it to the linked list.

The AddFlight function adds a new flight to a linked list of flights. 
It takes several parameters that represent the details of the flight, such as the flight ID, the origin, the
destination, the departure date, the departure time, the arrival date, and the arrival time.
*/


struct Hour
{
    int hour;
    int minutes;
    int seconds;
};

struct Date
{
    int day;
    int month;
    int year;
};

struct Passenger
{
    char rut[8];
    char Name[30];
    char PhoneNumber[8];
    int Status; //(1: reserv, 2: on plane)
    Passenger *NextPassenger;
};

struct Flight
{
    int Flight_id;
    char Origin[8];      // El origen puede tener solo 8 caracteres
    char Destination[8]; // El destino puede tener solo 8 caracteres
    char MatPlane[6];
    char NomPilot[20];
    Hour HourFlight;
    Date DateFlight;
    int Status; // 0: programmed 1:done
    Flight *NextFlight;
    Passenger *PassengerFlight;
};

// method for add passenger
void AddPassenger(char rut[], char name[], char phone[], int status, Passenger *PTRPASSENGER)
{

    Passenger *newP = new Passenger();

    strcpy(newP->rut, rut);
    strcpy(newP->Name, name);
    strcpy(newP->PhoneNumber, phone);
    newP->Status, status;

    if (PTRPASSENGER == NULL)
    { // SI ES IGUAL A NULO, NO SE A AGREGADO NINGUN PASAJERO PARA EL VUELO
        PTRPASSENGER = newP;
        newP->NextPassenger = NULL;
    }
    else
    {
        newP->NextPassenger = PTRPASSENGER;
        PTRPASSENGER = newP;
    }
};

// method for add Flight
void AddFlight(int flight_id, char origin[], char destin[], char matPlane[], char nomPilot[], Hour hourFlight, Date dateFlight, int status, Flight *PTRFLIGHT, Passenger pasFlight)
{

    Flight *newF = new Flight();

    newF->Flight_id, flight_id;
    strcpy(newF-> Origin, origin);
    strcpy(newF-> Destination, destin);
    strcpy(newF-> MatPlane, matPlane);
    strcpy(newF-> NomPilot, nomPilot);
    newF-> HourFlight, hourFlight;
    newF->DateFlight, dateFlight;
    newF -> Status, status;
    newF-> PassengerFlight, pasFlight;
    
    if (PTRFLIGHT == NULL)
    {
        PTRFLIGHT = newF;
        newF->NextFlight = NULL;
    }
    else
    {
        newF->NextFlight = PTRFLIGHT;
        PTRFLIGHT = newF;
    }
};

int main(){

};