#pragma once
#include <string>
#include <vector>

using namespace std;

class Airport {// Airport class
    public:
        Airport(string air_id, double longitude, double latitude); //constructor
        Airport(const Airport& other); //copy constructor

        //setter functions
        void setAirportID(string s_id);
        void setLongitude(double new_long);
        void setLatitude(double new_lat);

        //getter functions
        string getAirportID() const;
        double getLongitude() const;
        double getLatitude() const;

        // bool operator==(const Route &other);

        pair<double,double> coordinates; //first is latitdude and second is longitude
        string airport_ID;
};