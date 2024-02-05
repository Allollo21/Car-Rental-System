#ifndef SYSTEM_H
#define SYSTEM_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include "reservation.h"
#include "customer.h"
#include "car.h"
using namespace std;

class carSystem
{
private:
    reservation** reservationList;
    customer** customerList;
    car** carList;
    int r_capacity;
    int cu_capacity;
    int ca_capacity;
    int r_size;
    int cu_size;
    int ca_size;
public:
    carSystem()
    {
        reservationList = new reservation*[10];
        customerList = new customer*[10];
        carList = new car*[10];
        r_capacity = 10;
        cu_capacity = 10;
        ca_capacity = 10;
        r_size = 0;
        cu_size = 0;
        ca_size = 0;
    }

    ~carSystem()
    {
        for(int i=0; i<r_size; i++)
            delete reservationList[i];
        delete [] reservationList;
        for(int i=0; i<cu_size; i++)
            delete customerList[i];
        delete [] customerList;
        for(int i=0; i<ca_size; i++)
            delete carList[i];
        delete [] carList;
    }

    void r_resize()
    {
        r_capacity *= 2;
        reservation** temp = new reservation*[r_capacity];
        for(int i=0; i<r_size; i++)
        {
            temp[i] = reservationList[i];
        }

        delete [] reservationList;
        reservationList = temp;

    }

    void cu_resize()
    {
        cu_capacity *= 2;
        customer** temp = new customer*[cu_capacity];
        for(int i=0; i<cu_size; i++)
        {
            temp[i] = customerList[i];
        }

        delete [] customerList;
        customerList = temp;

    }

    void ca_resize()
    {
        ca_capacity *= 2;
        car** temp = new car*[ca_capacity];
        for(int i=0; i<ca_size; i++)
        {
            temp[i] = carList[i];
        }

        delete [] carList;
        carList = temp;

    }

    int carSearchHelper()
    {
        int search;
        bool found = false;

        cout << "Enter Car's ID : ";
        cin >> search;

        for(int i=0; i<ca_size; i++)
        {
            if(carList[i]->getCarID() == search )
            {
                found = true;
                cout << "\t\t\nCar Found!" <<endl;
                return i;
                break;
            }
        }

        if(!found)
        {
            cout << "\t\t\nCar Was Not Found!" <<endl;
            return -1;
        }
    }

    void addCar()
    {
        system("cls");
        system("color 7");

        if(ca_size == ca_capacity)
        {
            ca_resize();
        }

        carList[ca_size] = new car;
        carList[ca_size]->read();
        cout << "Car Added Successfully!"<<endl;
        ca_size++;

        system("pause");
        system("cls");
    }

    void modifyCar()
    {
        system("cls");
        system("color 7");

        int index = carSearchHelper();

        if(index!=-1)
        {
            cout << "Enter New Car Information:- " <<endl;
            carList[index]->read();
            cout << "\t\t\nEmployee Updated Successfully!\n\n" << endl;
        }

        system("pause");
        system("cls");
    }

    void deleteCar()
    {
        system("cls");
        system("color 7");

        int index = carSearchHelper();

        if(index!=-1)
        {
            for(int j=index+1; j<ca_size; j++)
            {
                carList[j-1] = carList[j];
            }

            ca_size--;
            cout << "\t\t\nCar deleted successfully.\n\n" << endl;
        }

        system("pause");
        system("cls");
    }

    void showCars()
    {
        system("cls");
        system("color 7");

        if (ca_size == 0)
        {
            cout << "No Cars Signed." << endl;
        }
        else
        {
            cout << "\n\t Showing All Cars \n\n";
            for (int i = 0; i < ca_size; i++)
            {
                carList[i]->print();
                cout << "-----------------" << endl;
            }
        }

        system("pause");
        system("cls");
    }

    int customerSearchHelper()
    {
        string search;
        bool found = false;

        cout << "Enter Customer's ID , Name or Phone : ";
        getline(cin>>ws,search);

        for(int i=0; i<cu_size; i++)
        {
            if(customerList[i]->getCustomerID() == search || customerList[i]->getName() == search || customerList[i]->getPhone() == search)
            {
                found = true;
                cout << "\t\t\nCustomer Found!" <<endl;
                return i;
                break;
            }
        }

        if(!found)
        {
            cout << "\t\t\nCustomer Was Not Found!" <<endl;
            return -1;
        }
    }

    void addCustomer()
    {
        system("cls");
        system("color 7");

        if(cu_size == cu_capacity)
        {
            cu_resize();
        }

        customerList[cu_size] = new customer;
        customerList[cu_size]->read();
        cu_size++;
        cout << "Customer Added Successfully!"<<endl;

        system("pause");
        system("cls");
    }

    void modifyCustomer()
    {
        system("cls");
        system("color 7");

        int index = customerSearchHelper();

        if(index!=-1)
        {
            cout << "Enter New Customer Information:- " <<endl;
            customerList[index]->read();
            cout << "\t\t\nCustomer Updated Successfully!\n\n" << endl;
        }

        system("pause");
        system("cls");
    }

    void deleteCustomer()
    {
        system("cls");
        system("color 7");

        int index = customerSearchHelper();

        if(index!=-1)
        {
            for(int j=index+1; j<cu_size; j++)
            {
                customerList[j-1] = customerList[j];
            }

            cu_size--;
            cout << "\t\t\nCustomer deleted successfully.\n\n" << endl;
        }

        system("pause");
        system("cls");
    }

    void showCustomers()
    {
        system("cls");
        system("color 7");

        if (cu_size == 0)
        {
            cout << "No Customers Signed." << endl;
        }
        else
        {
            cout << "\n\t Showing All Customers \n\n";
            for (int i = 0; i < cu_size; i++)
            {
                customerList[i]->print();
                cout << "-----------------" << endl;
            }
        }

        system("pause");
        system("cls");
    }

    void rentCar()
    {
        system("cls");
        system("color 7");

        if(r_size == 0)
        {
            r_resize();
        }

        reservationList[r_size] = new reservation;
        int customerIndex = customerSearchHelper();

        if(customerIndex!=-1)
        {
            cout << "\nChoose A car :- " <<endl;
            cout << "\nList Of Cars :-" <<endl;
            if(ca_size==0)
            {
                cout <<"No cars Signed Yet." <<endl;
            }
            else
            {
                for(int i=0; i<ca_size; i++)
                {

                    if(carList[i]->getAvailability() == 1)
                    {
                        cout << "[ID: " << carList[i]->getCarID() << "]:- " <<endl;
                        carList[i]->print();
                        cout << "-----------------" << endl;
                    }

                }
            }


            int carIndex = carSearchHelper();

            if(carIndex!=-1)
            {
                carList[carIndex]->setAvailability(0);

                reservationList[r_size]->read();
                reservationList[r_size]->setRentalPeriod();
                reservationList[r_size]->setCustomer(customerList[customerIndex]);
                reservationList[r_size]->setRentedCar(carList[carIndex]);
                r_size++;
            }
        }

        system("pause");
        system("cls");
    }

    void returnCar()
    {
        system("cls");
        system("color 7");

        string search;
        bool flag = false;
        cout << "Enter ID of Rented Car:- ";
        int carIndex = carSearchHelper();

        for(int i=0; i<r_size; i++)
        {
            if(reservationList[i]->getCarID() == carList[carIndex]->getCarID())
            {
                cout << "Reservation Found!" <<endl;
                flag = true;
                carList[carIndex]->setAvailability(1);
                cout << "Thank You For Using Our App , You Have To Pay -> " <<carList[carIndex]->getTotalAmount() << " $" <<endl;
                break;
            }
        }

        if(!flag)
        {
            cout << "Reservation Not Found!" <<endl;
        }

        system("pause");
        system("cls");
    }

    void viewAvailableCars()
    {
        system("cls");
        system("color 7");

        bool flag = false;

        cout << "\t\tList Of Available Cars:-" <<endl;

        for(int i=0; i<ca_size; i++)
        {
            if(carList[i]->getAvailability() == 1)
            {
                cout << "[ID: " << carList[i]->getCarID() << "]:- " <<endl;
                carList[i]->print();
                cout << "-----------------" << endl;
                flag = true;
            }
        }

        if(!flag)
        {
            cout << "No Available Cars Right At The Moment" <<endl;
        }

        system("pause");
        system("cls");
    }

    void viewRentalHistory()
    {
        system("cls");
        system("color 7");

        cout << "/t/t/t/t*Rental History*\n\n" ;

        for(int i=0; i<r_size; i++)
        {
            reservationList[i]->print();
            cout << endl;
            cout << "-----------------" << endl;
        }

        system("pause");
        system("cls");
    }

    void generateReport()
    {
        system("cls");
        system("color 7");
        cout << "\t\t\t\t*List Of Reservations Reporting*" <<endl;

        for(int i=0; i<r_size; i++)
        {
            cout << "This Reservation was made By :-"<<endl;
            reservationList[i]->getCustomer();
            cout << "Rented A car With the Following Attributes:-" <<endl;
            reservationList[i]->getRentedCar();
            cout << "During The following Date:-" <<endl;
            reservationList[i]->getDates();
            cout << "Current Status:-" <<endl;
            if(reservationList[i]->getAvailability() == 1)
                cout << "Returned" <<endl;
            if(reservationList[i]->getAvailability() == 0)
                cout << "Running" <<endl;
            cout << "-----------------" << endl;
        }

        system("pause");
        system("cls");
    }


};

#endif // SYSTEM_H
