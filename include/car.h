#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include "invoice.h"
using namespace std;

class car
{
private:
    string maker;
    string model;
    string year;
    int carID;
    int availability;           //0 for unavailable and 1 for available
    invoice* m_invoice;
public:
    car()
    {
       maker = "Unknown";
       model = "Unknown";
       year = "Unknown";
       availability = 1;
       m_invoice = new invoice;
    }

    void read()
    {
        cout << "Enter Car ID : ";
        cin >> carID;
        cout << "Enter Car Maker : ";
        getline(cin>>ws,maker);
        cout << "Enter Car Model : ";
        getline(cin>>ws,model);
        cout << "Enter Model Year : ";
        getline(cin>>ws,year);
        m_invoice->read();
    }

    void setCarID(int carID)
    {
        this->carID = carID;
    }

    int getCarID()
    {
        return carID;
    }

    void setMaker(string maker)
    {
        this->maker = maker;
    }

    string getMaker()
    {
        return maker;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    string getModel()
    {
        return model;
    }

    void setYear(string year)
    {
        this->year = year;
    }

    string getYear()
    {
        return year;
    }

    void setAvailability(int availability)
    {
        this->availability = availability;
    }

    int getAvailability()
    {
        return availability;
    }

    void setRentalPeriod()
    {
        m_invoice->setRentalPeriod();
    }

    double getTotalAmount()
    {
        return m_invoice->getTotalAmount();
    }

    void print()
    {
        cout << "Car's Maker is -> " << maker <<endl;
        cout << "Car's Model is -> " << model <<endl;
        cout << "Car's Year is -> " << year <<endl;
        if(availability == 1)
            cout << "Availability is -> Available " <<endl;
        if(availability == 0)
            cout << "Availability is -> Unavailable " <<endl;
        m_invoice->print();
    }
};

#endif // CAR_H
