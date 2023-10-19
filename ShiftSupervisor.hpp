#ifndef SHIFTSUPERVISOR_HPP
#define SHIFTSUPERVISOR_HPP

#include "Employee.hpp"

using namespace std;

class ShiftSupervisor: public Employee{
    private:
        int _salary;
        int _bonus;
    public:
        int getSalary() const
            {return _salary;}
        int getBonus() const
            {return _bonus;}
        void setSalary(int salary)
            {_salary = salary;}
        void setBonus(int bonus)
            {_bonus = bonus;}
        ShiftSupervisor();
        ShiftSupervisor(string name, int number, string hireDate, int salary, int bonus);
        ~ShiftSupervisor();
        void print()const;

};

#endif