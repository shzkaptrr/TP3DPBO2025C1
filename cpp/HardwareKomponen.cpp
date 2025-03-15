#pragma once
#include <iostream>
#include <string>


using namespace std;


class HardwareKomponen {
private:
    string model;
    int konsumsiDayaWatt;
public:
    HardwareKomponen()
    {

    }


    HardwareKomponen(string model, int konsumsiDayaWatt)
    {
        this->model = model;
        this->konsumsiDayaWatt = konsumsiDayaWatt;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    void setKonsumsiDayaWatt(int konsumsiDayaWatt)
    {
        this->konsumsiDayaWatt = konsumsiDayaWatt;
    }


    string getModel()
    {
        return model;
    }
    int getKonsumsiDayaWatt()
    {
        return konsumsiDayaWatt;
    }


    ~HardwareKomponen()
    {




    }
};
