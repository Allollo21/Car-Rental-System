#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>
#include "rentalagreemnet.h"
using namespace std;

class invoice
{
private:
    double rentalCharges;
    double taxes;
    double totalAmount;
    rentalagreemnet* m_agreement;
public:
    invoice()
    {
        rentalCharges = 0;
        taxes = 0;
        totalAmount = 0;
        m_agreement = new rentalagreemnet;
    }

    void read()
    {
        m_agreement->read();
        cout << "Enter Rental Charges : ";
        cin >> rentalCharges;
        cout << "Enter Taxes : ";
        cin >> taxes;
    }

    void setRentalCharges(double rentalCharges)
    {
        this->rentalCharges = rentalCharges;
    }

    double getRentalCharges()
    {
        return rentalCharges;
    }

    void setTaxes(double taxes)
    {
        this->taxes = taxes;
    }

    double getTaxes()
    {
        return taxes;
    }

    double getTotalAmount()
    {
        totalAmount = ((m_agreement->getRenalPeriod()*m_agreement->getRenalRate())+m_agreement->getInsuranceCharges()+rentalCharges+taxes);
        return totalAmount;
    }

    void setRentalPeriod()
    {
        m_agreement->setRentalPeriod();
    }

    void print()
    {
        m_agreement->print();
        cout << "Car's Rental Charges -> " << rentalCharges<< " $" <<endl;
        cout << "Car's Taxes -> " << taxes << " $" <<endl;
        cout << "Total Cash To Be Paid -> " << totalAmount << " $" <<endl;
    }
};

#endif // INVOICE_H
