#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
#include <string>
#include "date.h"
#include "car.h"
#include "customer.h"
#include "invoice.h"
using namespace std;

class reservation
{
private:
    date* startDate;
    date* endDate;
    car* rentedCar;
    customer* renter;
public:
    reservation()
    {
        startDate = endDate = new date;
        rentedCar = new car;
        renter = new customer;
    }

    ~reservation()
    {
        delete startDate;
        delete endDate;
        delete rentedCar;
        delete renter;
    }

    void read()
    {
        startDate->read();
        endDate->read();
    }

    void getDates()
    {
        startDate->print();
        endDate->print();
    }

    void setRentedCar(car* const & a)
    {
        rentedCar = a;
    }

    void getRentedCar()
    {
        rentedCar->print();
    }

    void setCustomer(customer* const & a)
    {
        renter = a;
    }

    void getCustomer()
    {
        renter->print();
    }

    void setRentalPeriod()
    {
        rentedCar->setRentalPeriod();
    }

    int getCarID()
    {
        return rentedCar->getCarID();
    }

    int getAvailability()
    {
        return rentedCar->getAvailability();
    }

    void print()
    {
        renter->print();
        rentedCar->print();
        startDate->print();
        endDate->print();
    }
};

#endif // RESERVATION_H
