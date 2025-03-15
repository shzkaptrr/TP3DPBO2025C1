#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"


using namespace std;


class Komputer
{
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;
    Peripheral peripheral;
public:
    Komputer()
    {


    }


    Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive, Peripheral peripheral)
    {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddrive = harddrive;
        this->peripheral = peripheral;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setCpu(Cpu cpu)
    {
        this->cpu = cpu;
    }


    void setRam(vector<Ram> ramList)
    {
        this->ramList = ramList;
    }    
   
    void setHarddrive(Harddrive harddrive)
    {
        this->harddrive = harddrive;
    }

    void setPeripheral(Peripheral peripheral)
    {
        this->peripheral = peripheral;
    }


    void addRam(Ram ram)
    {
        this->ramList.push_back(ram);
    }


    string getNama()
    {
        return this->nama;
    }


    Cpu getCpu()
    {
        return this->cpu;
    }


    vector<Ram> getRamList() // return vector
    {
        return this->ramList;
    }


    Harddrive getHarddrive()
    {
        return this->harddrive;
    }

    Peripheral getPeripheral()
    {
        return this->peripheral;
    }

    ~Komputer()
    {


    }
};
