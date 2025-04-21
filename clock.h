#pragma once
#include <iostream>
using namespace std;

class dateType {
protected: //what if private?
    int dMonth;
    int dDay;
    int dYear;
public:
    void setDate(int month, int day, int year) {
        if ((month > 0) && (month < 4)) {
            dMonth = month;
        }
        if ((month == 2) && ((day > 0) && (day < 29)))
        {
            dDay = day;
        }
        else if ((month != 2) && ((day > 0) && (day < 32))) {
            dDay = day;

        }
        if (year >= 1000 && year <= 9999) {
            dYear = year;
        }
    
    
    };//data validation needed
    void printDate() const {
        cout << (dMonth < 10 ? 0 : "")<< dMonth << "/" << (dDay < 10 ? 0 : "") <<  dDay << "/" << dYear << "\t";
    };
    dateType(int m = 1, int d = 1, int y = 2000) {
        dMonth = m;
        dDay = d;
        dYear = y;
    };


};

class clockType {
protected: //what if private?
    int cHours;
    int cMinutes;
    int cSeconds;
public:
    void setTime(int hours, int minutes, int seconds) {
        if (hours >= 0 && hours <= 24) {
            cHours = hours;
        }
        if (minutes >= 0 && minutes < 60) {
            cMinutes = minutes;
        }
        if (seconds >= 0 && seconds < 60) {
            cSeconds = seconds;
        }
    
    
    }; //data validation needed
    void printTime() const {
        cout << (cHours < 10 ? 0 : "") << cHours << ":" << (cMinutes < 10 ? 0 : "") << cMinutes << ":" << (cSeconds < 10 ? 0 : "") << cSeconds << endl;
    };
    clockType(int h = 0, int m = 0, int s = 0) {
        cHours = h;
        cMinutes = m;
        cSeconds = s;
       
    
    };


};

class dateTimeType : public dateType, public clockType {
public:
    dateTimeType() : dateType(), clockType() {

    };
    void setDateTime(int month, int day, int year, int hour, int min, int sec) {
        setDate(month, day, year);
        setTime(hour, min, sec);
    };
    void printDateTime() {
        printDate();
        printTime();
    }



};
