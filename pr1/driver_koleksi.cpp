#include "KoleksiKendaraan.hpp"
#include <iostream>

using namespace std;

int main() {
    Kendaraan k1("mobil", "Toyota", 2010);
    Kendaraan k2("bus", "Mercedes", 2015);
    Kendaraan k3("minibus", "Isuzu", 2018);
    Kendaraan k4("mobil", "Honda", 2012);
    Kendaraan k5("bus", "Scania", 2017);
    Kendaraan k6("minibus", "Mitsubishi", 2019);
    Kendaraan k7;

    KoleksiKendaraan kol1;
    kol1 << k1 << k2 << k3;
    kol1.printAll();
    cout << endl;

    KoleksiKendaraan kol2(4);
    kol2 << k4 << k5 << k6 << k7;
    kol2.printAll();
    cout << endl;

    KoleksiKendaraan kol3;
    kol3 << kol1 << kol2;
    kol3.printAll();
    cout << endl;

    return 0;
}