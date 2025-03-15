// StorageKomponen.cpp
#pragma once
#include <iostream>
#include <string>
#include "Ram.cpp"
#include "Harddrive.cpp"

using namespace std;

class StorageKomponen : public virtual Ram, public virtual Harddrive
{
private:
    int kecepatanBaca;
    int kecepatanTulis;

public:
    StorageKomponen() {}

    StorageKomponen(int kecepatanBaca, int kecepatanTulis, int kapasitasGBRam, string ddr, string merkRam, string namaRam,
                    int kapasitasGBHDD, string tipeDrive, string merkHDD, string namaHDD, string model, int konsumsiDayaWatt)
        : Komponen(merkRam, namaRam), Ram(kapasitasGBRam, ddr, merkRam, namaRam),
          Harddrive(kapasitasGBHDD, tipeDrive, merkHDD, namaHDD, model, konsumsiDayaWatt),
          kecepatanBaca(kecepatanBaca), kecepatanTulis(kecepatanTulis) {}

    void setKecepatanBaca(int kecepatanBaca) { this->kecepatanBaca = kecepatanBaca; }
    void setKecepatanTulis(int kecepatanTulis) { this->kecepatanTulis = kecepatanTulis; }

    int getKecepatanBaca() const { return kecepatanBaca; }
    int getKecepatanTulis() const { return kecepatanTulis; }

    ~StorageKomponen() {}
};
