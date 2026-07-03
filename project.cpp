#include <iostream>

using namespace std;

int main()
{
    int rideChoice;
    double distance;
    char Peakhour;
    double Fare;
    double RatePerKM;
    double surcharge;
    double subtotal;
    double totalFare;


    cout << "*** WELCOME TO THE GRAB FARE CALCULATOR ***" << endl;
    cout << "Select Your Grab ride type:" << endl;
    cout << "1. GrabShare (Shared Ride, 1-2 Per Car):" << endl;
    cout << "2. GrabCar   (Standard Ride):" <<endl;
    cout << "3. Grab Premium (Luxury 6-seater)" << endl;
    cout << "Enter choice (1-3): ";

    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Is it peak hour? (Y/N): ";
    cin >> peakHour;

    // Determine rate per km
    if (rideChoice == 1)
    {
        ratePerKM = 1.20;
    }
    else if (rideChoice == 2)
    {
        ratePerKM = 1.50;
    }
    else if (rideChoice == 3)
    {
        ratePerKM = 2.50;
    }
    else
    {
        cout << "Invalid ride choice!" << endl;
        return 0;
    }

    // Calculate basic fare
    fare = distance * ratePerKM;

    // Peak hour surcharge (20%)
    if (peakHour == 'Y' || peakHour == 'y')
    {
        surcharge = fare * 0.20;
    }

    totalFare = fare + surcharge;
}
