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

        virtual double getPowerConsumption();

        int get_powerRating();
        void set_powerRating(int);

        bool get_isOn();

};

#endif