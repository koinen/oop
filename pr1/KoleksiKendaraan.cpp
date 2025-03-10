#include "KoleksiKendaraan.hpp"
#include <iostream>

using namespace std;

KoleksiKendaraan::KoleksiKendaraan() {
    size = 100;
    koleksi = new Kendaraan[size];
    nEff = 0;
}

KoleksiKendaraan::KoleksiKendaraan(int size) {
    this->size = size;
    koleksi = new Kendaraan[size];
    nEff = 0;
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& kol) {
    size = kol.size;
    koleksi = new Kendaraan[size];
    nEff = kol.nEff;
    for (int i = 0; i < nEff; i++) {
        koleksi[i] = kol.koleksi[i];
    }
}

KoleksiKendaraan::~KoleksiKendaraan() {
    delete[] koleksi;
}

KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan& kol) {
    if (this != &kol) {
        delete[] koleksi;
        size = kol.size;
        koleksi = new Kendaraan[size];
        nEff = kol.nEff;
        for (int i = 0; i < nEff; i++) {
            koleksi[i] = kol.koleksi[i];
        }
    }
    return *this;
}

void KoleksiKendaraan::printAll() {
    for (int i = 0; i < nEff; i++) {
        koleksi[i].printInfo();
    }
}

KoleksiKendaraan& KoleksiKendaraan::operator<<(Kendaraan& k) {
    koleksi[nEff] = k;
    nEff++;
    return *this;
}

KoleksiKendaraan& KoleksiKendaraan::operator<<(KoleksiKendaraan& kol) {
    int i = 0;
    while (nEff < size && i < kol.nEff) {
        *this << kol.koleksi[i];
        i++;
    }
    return *this;
}