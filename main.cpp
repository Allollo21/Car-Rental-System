#include <iostream>
#include <string>
#include "system.h"
using namespace std;
carSystem* sy = new carSystem;
void carHandle()
{
    int choice;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--         CAR MANAGMENT      ----|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Add A Car"<<endl;
        cout << "\t\t\t[2] Modify A Car"<<endl;
        cout << "\t\t\t[3] Delete A Car"<<endl;
        cout << "\t\t\t[4] Show All Cars"<<endl;
        cout << "\t\t\t[0] Return To Main Menu"<<endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            sy->addCar();
            break;

        case 2:
            sy->modifyCar();
            break;

        case 3:
            sy->deleteCar();
            break;

        case 4:
            sy->showCars();
            break;

        case 0:
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    while (choice != 0);     // Repeat until the user chooses to exit

}

void customerHandle()
{
    int choice;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--     CUSTOMER MANAGMENT     ----|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Add A Customer "<<endl;
        cout << "\t\t\t[2] Modify A Customer"<<endl;
        cout << "\t\t\t[3] Delete A Customer"<<endl;
        cout << "\t\t\t[4] Show Customers"<<endl;
        cout << "\t\t\t[0] Return To Main Menu"<<endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            sy->addCustomer();
            break;

        case 2:
            sy->modifyCustomer();
            break;

        case 3:
            sy->deleteCustomer();
            break;

        case 4:
            sy->showCustomers();
            break;

        case 0:
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    while (choice != 0);     // Repeat until the user chooses to exit

}

int main()
{
    int choice;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--      CAR RENTAL SYSTEM     ----|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Car Information Management(ONLY FOR ADMINS)"<<endl;
        cout << "\t\t\t[2] Customer Information Management"<<endl;
        cout << "\t\t\t[3] Rent A Car"<<endl;
        cout << "\t\t\t[4] Return A Car"<<endl;
        cout << "\t\t\t[5] View Available Cars"<<endl;
        cout << "\t\t\t[6] View Rental History"<<endl;
        cout << "\t\t\t[7] Generate Report"<<endl;
        cout << "\t\t\t[0] Exit"<<endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            carHandle();
            break;

        case 2:
            customerHandle();
            break;

        case 3:
            sy->rentCar();
            break;

        case 4:
            sy->returnCar();
            break;

        case 5:
            sy->viewAvailableCars();
            break;

        case 6:
            sy->viewRentalHistory();
            break;

        case 7:
            sy->generateReport();
            break;

        case 0:         //exit
            cout << "Thank you for using CAR RENTAL SYSTEM. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    while (choice != 0);     // Repeat until the user chooses to exit

    delete sy;

    return 0;
}
