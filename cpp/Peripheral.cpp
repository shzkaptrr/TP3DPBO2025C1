#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Peripheral
{
private:
    string tipe;
    string tipeKoneksi;
    vector<string> fitur; // Menggunakan vector untuk menyimpan daftar fitur

public:
    // Konstruktor default
    Peripheral() {}

    // Konstruktor dengan parameter
    Peripheral(string tipe, string tipeKoneksi, vector<string> fitur)
    {
        this->tipe = tipe;
        this->tipeKoneksi = tipeKoneksi;
        this->fitur = fitur;
    }

    // Setter untuk tipe
    void setTipe(string tipe)
    {
        this->tipe = tipe;
    }

    // Setter untuk tipeKoneksi
    void setTipeKoneksi(string tipeKoneksi)
    {
        this->tipeKoneksi = tipeKoneksi;
    }

    // Setter untuk fitur
    void setFitur(vector<string> fitur)
    {
        this->fitur = fitur;
    }

    // Getter untuk tipe
    string getTipe() const
    {
        return this->tipe;
    }

    // Getter untuk tipeKoneksi
    string getTipeKoneksi() const
    {
        return this->tipeKoneksi;
    }

    // Getter untuk fitur
    vector<string> getFitur() const
    {
        return this->fitur;
    }

    
    // Destruktor
    ~Peripheral() {}
};
