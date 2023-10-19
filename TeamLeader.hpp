#ifndef TEAMLEADER_HPP
#define TEAMLEADER_HPP

#include "ProductionWorker.hpp"

using namespace std;

class TeamLeader: public ProductionWorker{
    private:
        int _bonus;
        int _requiredTraining;
        int _attendedTraining;
    public: 
        TeamLeader();
        TeamLeader(string name, int number, string hireDate, int shift, double pay,
            int bonus, int requiredTraining, int attendedTraining);
        ~TeamLeader();
        void print() const;
        int getBonus() const
            {return _bonus;}
        int getRequiredTraining() const
            {return _requiredTraining;}
        int getAttendedTraining() const
            {return _attendedTraining;}
        void setBonus(int bonus)
            {_bonus = bonus;}   
        void setRequiredTraining(int requiredTraining)
            {_requiredTraining = requiredTraining;}   
        void setAttendedTraining(int attendedTraining)
            {_attendedTraining = attendedTraining;}   


};

#endif