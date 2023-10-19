#include <iostream>
#include "Employee.hpp"
#include "ProductionWorker.hpp"
#include "ShiftSupervisor.hpp"
#include "TeamLeader.hpp"

using namespace std;

int main(){

    //Question 1
    cout << endl << "---QUESTION 1---" << endl;
    ProductionWorker A("John",1,"Jan 1",1,25.75);
    A.print();
    cout << endl;

    //Question 2
    cout << endl << "---QUESTION 2---" << endl;
    ShiftSupervisor B("Bob",5,"Dec 4",120000,25000);
    B.print();
    cout << endl;

    //Question 3
    cout << endl << "---QUESTION 3---" << endl;
    TeamLeader C("Kate",22,"Aug 24", 1, 39.25, 12000, 100, 30);
    C.print();
    cout << endl;

    return 0;
}