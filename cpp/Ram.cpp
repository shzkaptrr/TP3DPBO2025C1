// Ram.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public virtual Komponen
{
private:
    int kapasitasGB;
    string ddr;
public:
    Ram() {}

    Ram(int kapasitasGB, string ddr, string merk, string nama)
        : Komponen(merk, nama), kapasitasGB(kapasitasGB), ddr(ddr) {}

    void setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }
    void setDdr(string ddr) { this->ddr = ddr; }

    int getKapasitasGB() const { return kapasitasGB; }
    string getDdr() const { return ddr; }

    ~Ram() {}
};
