#ifndef RENTALAGREEMNET_H
#define RENTALAGREEMNET_H
#include <iostream>
#include <string>
using namespace std;

class rentalagreemnet
{
private:
    double rentalPeriod;                        //number of days
    double rentalRate;                          //pay for a day
    double insuranceCharges;                    //a portion of insurance has to be paid
public:
    rentalagreemnet()
    {
        rentalPeriod = 0;
        rentalRate = 0;
        insuranceCharges = 0;
    }

    void read()
    {
        cout << "Enter Rental Rate : ";
        cin >> rentalRate;
        cout << "Enter Insurance Charges: ";
        cin >> insuranceCharges;
    }

    void setRentalPeriod()
    {
        cout << "Enter Rental Period (Number OF Days): ";
        cin >> rentalPeriod;
    }

    double getRenalPeriod()
    {
        return rentalPeriod;
    }

    void setRentalRate(double rentalRate)
    {
        this-> rentalRate = rentalRate;
    }

    double getRenalRate()
    {
        return rentalRate;
    }

    void setInsuranceCharges(double insuranceCharges)
    {
        this-> insuranceCharges = insuranceCharges;
    }

    double getInsuranceCharges()
    {
        return insuranceCharges;
    }

    void print()
    {
        cout << "Car's Rental Period -> " << rentalPeriod << " Days" <<endl;
        cout << "Car's Rental Rate -> " << rentalRate << " $" <<endl;
        cout << "Car's Insurance Charges -> " << insuranceCharges << " $" <<endl;
    }
};

#endif // RENTALAGREEMNET_H
