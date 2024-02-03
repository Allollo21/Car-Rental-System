#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;

class date
{
private:
    string day;
    string month;
    string year;
public:
    date()
    {
        day = "Unknown";
        month = "Unknown";
        year = "Unknown";
    }

    void read()
    {
        char temp;
        cout << "Enter Date As (dd.mm.yyyy): ";
        getline(cin>>ws,day);
        cin >> temp;
        getline(cin>>ws,month);
        cin >> temp;
        getline(cin>>ws,year);
    }

    void setDay(string day)
    {
        this->day = day;
    }

    string getDay()
    {
        return day;
    }

    void setMonth(string month)
    {
        this->month = month;
    }

    string getMonth()
    {
        return month;
    }

    void setYear(string year)
    {
        this->year = year;
    }

    string getYear()
    {
        return year;
    }

    void print ()
    {
        cout << "Date is -> " << day << "." << month << "." << year ;
    }

};

#endif // DATE_H
