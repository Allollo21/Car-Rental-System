# Project: Car Rental System

This project is a C++ program that allows the user to rent and return cars using a simple menu-driven interface. The user can also manage the car and customer information using the car system class. The car system class consists of two vectors of car and customer objects as its data members.

## How to run the program

To run the program, you need a C++ compiler and an IDE (Integrated Development Environment) that supports C++. You also need to have the header files `system.h`, `car.h`, and `customer.h` in the same folder as the main file `carrental.cpp`. You can use any compiler and IDE of your choice, such as GCC and Visual Studio Code. 

To compile the program, open the terminal or command prompt and navigate to the folder where you saved the project files. Then type the following command:

`g++ -o carrental carrental.cpp`

This will create an executable file named `carrental` in the same folder. To run the program, type the following command:

`./carrental`

The program will display a menu with seven options: 1. Car Information Management (ONLY FOR ADMINS), 2. Customer Information Management, 3. Rent A Car, 4. Return A Car, 5. View Available Cars, 6. View Rental History, and 7. Generate Report. The user can enter their choice and follow the instructions on the screen.

## How the program works

The program uses a class named `carSystem` to store and manipulate the car and customer information. The `carSystem` class has two vectors of `car` and `customer` objects as its data members. The `car` class has data members such as car ID, model, color, status, and rent price. The `customer` class has data members such as customer ID, name, phone number, and rented car ID.

The `carSystem` class also has the following member functions:

- `addCar()`: This function asks the user to enter the details of a new car, such as car ID, model, color, and rent price. It then creates a `car` object with these details and adds it to the car vector.
- `modifyCar()`: This function asks the user to enter the car ID of the car they want to modify. It then searches the car vector for the matching car and allows the user to update any of the details, such as model, color, or rent price. If the car is not found, it displays an error message.
- `deleteCar()`: This function asks the user to enter the car ID of the car they want to delete. It then searches the car vector for the matching car and removes it from the car vector. If the car is not found, it displays an error message.
- `showCars()`: This function displays the details of all the cars in the car vector in a tabular format.
- `addCustomer()`: This function asks the user to enter the details of a new customer, such as customer ID, name, and phone number. It then creates a `customer` object with these details and adds it to the customer vector.
- `modifyCustomer()`: This function asks the user to enter the customer ID of the customer they want to modify. It then searches the customer vector for the matching customer and allows the user to update any of the details, such as name or phone number. If the customer is not found, it displays an error message.
- `deleteCustomer()`: This function asks the user to enter the customer ID of the customer they want to delete. It then searches the customer vector for the matching customer and removes it from the customer vector. If the customer is not found, it displays an error message.
- `showCustomers()`: This function displays the details of all the customers in the customer vector in a tabular format.
- `rentCar()`: This function asks the user to enter the customer ID and the car ID of the car they want to rent. It then searches the customer and car vectors for the matching IDs and updates the status of the car and the rented car ID of the customer. It also displays the rent price and the due date of the car. If the customer or car is not found, or the car is already rented, it displays an error message.
- `returnCar()`: This function asks the user to enter the customer ID and the car ID of the car they want to return. It then searches the customer and car vectors for the matching IDs and updates the status of the car and the rented car ID of the customer. It also displays the total amount to be paid by the customer based on the rent price and the number of days. If the customer or car is not found, or the car is not rented by the customer, it displays an error message.
- `viewAvailableCars()`: This function displays the details of all the cars that are available for rent in the car vector in a tabular format.
- `viewRentalHistory()`: This function asks the user to enter the customer ID or the car ID of the rental history they want to view. It then searches the customer and car vectors for the matching ID and displays the details of the rental history, such as the rent date, the due date, and the amount paid. If the customer or car is not found, it displays an error message.
- `generateReport()`: This function generates a report of the car rental system, such as the total number of cars, customers, and rentals, the total revenue, and the average rent price.

The main function creates a `carSystem` object and uses a loop and a switch statement to call the appropriate member function based on the user's choice. The loop terminates when the user chooses to exit.

## Limitations and improvements

The program has some limitations and possible improvements, such as:

- The program does not check for invalid input, such as empty strings, non-numeric values, or duplicate IDs. The program could use input validation techniques, such as `cin.fail()` or `try-catch` blocks, to handle errors and exceptions.
- The program does not allow the user to sort, filter, or export the car and customer information. The program could use algorithms, such as `sort()` or `find_if()`, or libraries, such as `fstream` or `csv`, to enhance the functionality of the car system.
- The program does not store the car and customer information in a persistent way, such as a file or a database. The program could use file handling or database connectivity techniques, such as `fstream` or `sqlite3`, to save and load the information from an external source.
