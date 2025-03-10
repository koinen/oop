#include <iostream>
#include <string>
#include "Kendaraan.hpp"

using namespace std;

int Kendaraan::nomorKendaraan = 0;

Kendaraan::Kendaraan() {
    nomor = ++nomorKendaraan;
    kategori = "mobil";
    merk = "XXX";
    tahun = 0;
}

Kendaraan::Kendaraan(string kategori, string merk, int tahun) {
    this->nomor = ++nomorKendaraan;
    this->kategori = kategori;
    this->merk = merk;
    this->tahun = tahun;
}

Kendaraan::Kendaraan(const Kendaraan& k) {
    nomor = k.nomor;
    kategori = k.kategori;
    merk = k.merk;
    tahun = k.tahun;
}

Kendaraan::~Kendaraan() {
}

Kendaraan& Kendaraan::operator=(const Kendaraan& k) {
    nomor = k.nomor;
    kategori = k.kategori;
    merk = k.merk;
    tahun = k.tahun;
    return *this;
}

void Kendaraan::printInfo() {
    cout << "Kendaraan " << nomor << " (" << kategori << " " << merk << " tahun " << tahun << ")" << endl;
}

int Kendaraan::biayaSewa(int lamaSewa) {
    if (kategori == "mobil") {
        return 500000 * lamaSewa;
    } else if (kategori == "bus") {
        return 1000000 * lamaSewa;
    } else if (kategori == "minibus") {
        if (lamaSewa < 5) {
            return 5000000;
        } else {
            return 5000000 + 500000 * (lamaSewa - 5);
        }
    } else {
        return 0;
    }
}