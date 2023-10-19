#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

using namespace std;

class Employee{
    private:
        string _name;
        int _number;
        string _hireDate;

    public:
        Employee();
        Employee(string name, int number, string hireDate);
        ~Employee();
        string getName() const
            {return _name;}
        void setName(string name)
            {_name = name;}
        int getNumber() const
            {return _number;}
        void setNumber(int number)
            {_number = number;}
        string getHireDate() const
            {return _hireDate;}
        void setHireDate(string hireDate)
            {_hireDate = hireDate;}
        




};


#endif