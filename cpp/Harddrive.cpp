// Harddrive.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "HardwareKomponen.cpp"

using namespace std;

class Harddrive : public virtual Komponen, public HardwareKomponen
{
private:
    int kapasitasGB;
    string tipeDrive;
public:
    Harddrive() {}

    Harddrive(int kapasitasGB, string tipeDrive, string merk, string nama, string model, int konsumsiDayaWatt)
        : Komponen(merk, nama), HardwareKomponen(model, konsumsiDayaWatt), kapasitasGB(kapasitasGB), tipeDrive(tipeDrive) {}

    void setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }
    void setTipeDrive(string tipeDrive) { this->tipeDrive = tipeDrive; }

    int getKapasitasGB() const { return kapasitasGB; }
    string getTipeDrive() const { return tipeDrive; }

    ~Harddrive() {}
};
