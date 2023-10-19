#include "Employee.hpp"


using namespace std;

Employee::Employee(){
    _name = "NULL";
    _number = 0;
    _hireDate = "NULL";
}
Employee::Employee(string name, int number, string hireDate){
    _name = name;
    _number = number;
    _hireDate = hireDate;
}
Employee::~Employee(){

}