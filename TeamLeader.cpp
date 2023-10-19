#include "TeamLeader.hpp"
#include <iostream> 

using namespace std;

TeamLeader::~TeamLeader(){
}
TeamLeader::TeamLeader():ProductionWorker(){
    _bonus = 0;
    _requiredTraining = 0;
    _attendedTraining = 0;
}
TeamLeader::TeamLeader(string name, int number, string hireDate, int shift, double pay,
            int bonus, int requiredTraining, int attendedTraining):
            ProductionWorker(name, number, hireDate, shift, pay){

    _bonus = bonus;
    _requiredTraining = requiredTraining;
    _attendedTraining = attendedTraining;

}
void TeamLeader::print() const{
    cout << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Number: " << this->getNumber() << endl;
    cout << "Hire date: " << this->getHireDate() << endl;
    cout << "Pay rate: $" << this->getPay() << endl;
    cout << "Shift: " << this->getShift() << endl;
    cout << "Bonus: $" << this->getBonus() << endl;
    cout << "Required Traning (hours): " << this->getRequiredTraining() << endl;
    cout << "Attended Traning (hours): " << this->getAttendedTraining() << endl;
    cout << endl;

}