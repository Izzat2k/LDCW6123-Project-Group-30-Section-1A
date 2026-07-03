#include <iostream>

using namespace std;

int main()
{
    int rideChoice;
    double distance;
    char peakHour;
    double fare;
    double ratePerKM;
    double surcharge;
    double subtotal;
    double totalFare;


    cout << "*** WELCOME TO THE GRAB FARE CALCULATOR ***" << endl;
    cout << "Select Your Grab ride type:" << endl;
    cout << "1. GrabShare (Shared Ride, 1-2 Per Car):" << endl;
    cout << "2. GrabCar   (Standard Ride):" <<endl;
    cout << "3. Grab Premium (Luxury 6-seater)" << endl;
    cout << "Enter choice (1-3): ";
    cin >> rideChoice;


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

    cout << "Enter distance (km): ";
    cin >> distance;

    // Calculate basic fare
    fare = distance * ratePerKM;

    cout << "Is it peak hour? (Y/N): " << endl;
    cin >> peakHour;

    // Peak hour surcharge (20%)
    if (peakHour == 'Y' || peakHour == 'y')
    {
        surcharge = fare * 0.20;
    }
    else if (peakHour == 'N'|| peakHour == 'n')
    {
        surcharge=0;
    }
    else
    {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    totalFare = fare + surcharge;


    cout << "\n----- FARE SUMMARY -----" << endl;
    cout << "Base Fare: RM " << fare << endl;
    cout << "Surcharge: RM " << surcharge << endl;
    cout << "Total Fare: RM " << totalFare << endl;

    return 0;
}
