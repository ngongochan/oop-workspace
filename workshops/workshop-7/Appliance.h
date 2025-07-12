#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    protected:
        int powerRating;
        bool isOn;
    public:
        Appliance();
        Appliance(int);

        void turnOn();
        void turnOff();

        double getPowerConsumption();

        int getPowerRating();
        void setPowerRating(int);

        bool getIsOn();

};

#endif