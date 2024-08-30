// Alex Beer
// University of Alaska Fairbanks
// August 30,2024
// TimeOfDay.hpp


#ifndef TIME_OF_DAY_H
#define TIME_OF_DAY_H

#include <iostream>
#include <ostream>
#include <ctime>
#include <string>

class TimeOfDay {

public:

    TimeOfDay() {

    }

    TimeOfDay( int hour, int minute, int second ) {        
        setTime( hour, minute, second );
    }

public:

    TimeOfDay & operator++() {

    }

public:

    void getTime( int hour, int minute, int second ) {
        second = _second % (60 * 60);
        minute = second / 60;
        hour = minute / 60;
    }

    void setTime( int hour, int minute, int second ) {
        _second = (hour * 60 * 60) + (minute * 60) + second;
    }

private:

    int _second; // _second means its a data member of the class. Seconds past midnight.
};

std::ostream& operator<<(std::ostream& os, const TimeOfDay& time);

# endif