#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

class customer
{
private:
    string name;
    string address;
    string phone;
    string customerID;
public:
    customer()
    {
        name = "Unknown";
        address = "Unknown";
        phone = "Unknown";
        customerID = "Unknown";
    }

    void read()
    {
        cout << "Enter Customer Name : ";
        getline(cin>>ws,name);
        cout << "Enter Customer Address : ";
        getline(cin>>ws,address);
        cout << "Enter Customer Phone : ";
        getline(cin>>ws,phone);
        cout << "Enter Customer ID : ";
        cin >> customerID;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void setAddress(string address)
    {
        this->address = address;
    }

    string getAddress()
    {
        return address;
    }

    void setPhone(string phone)
    {
        this->phone = phone;
    }

    string getPhone()
    {
        return phone;
    }

    void setCustomerID(int customerID)
    {
        this->customerID = customerID;
    }

    string getCustomerID()
    {
        return customerID;
    }

    void print()
    {
        cout << "Customer's Name is -> " << name <<endl;
        cout << "Customer's Address is -> " << address <<endl;
        cout << "Customer's Phone Number is -> " << phone <<endl;
        cout << "Customer's ID is -> " << customerID <<endl;
    }
};

#endif // CUSTOMER_H
