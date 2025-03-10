#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

int main() {
    Kendaraan k1("mobil", "Honda", 2012);
    Kendaraan k2("bus", "Scania", 2017);
    Kendaraan k3("minibus", "Mitsubishi", 2019);
    Kendaraan k4;
    Kendaraan k5;

    k1.printInfo();
    cout << endl;
    k2.printInfo();
    cout << endl;
    k3.printInfo();
    cout << endl;
    k4.printInfo();
    cout << endl;
    k5.printInfo();
    cout << endl;

    cout << "Biaya sewa" << endl;
    cout << "k1, 5 hari: " << k1.biayaSewa(5) << endl;
    cout << "k2, 2 hari: " << k2.biayaSewa(2) << endl;
    cout << "k3, 4 hari: " << k3.biayaSewa(4) << endl;
    cout << "k3, 6 hari: " << k3.biayaSewa(6) << endl;
    cout << "k4, 3 hari: " << k4.biayaSewa(3) << endl;
    
    return 0;
}