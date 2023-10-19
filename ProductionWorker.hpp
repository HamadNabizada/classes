#ifndef PRODUCTIONWORKER_HPP
#define PRODUCTIONWORKER_HPP

#include "Employee.hpp"

using namespace std;

class ProductionWorker: public Employee{
    private:
        int _shift;
        double _hourlyPay;
    public:
        int getShift() const
            {return _shift;}
        void setShift(int shift)
            {_shift = shift;}
        int getPay() const
            {return _hourlyPay;}
        void setPay(double pay)
            {_hourlyPay = pay;}
    ProductionWorker();
    ProductionWorker(string name, int number, string hireDate, int shift, double pay);
    ~ProductionWorker();
    void print() const;
};

#endif