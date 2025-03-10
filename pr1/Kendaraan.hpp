#include <string>
#ifndef _KENDARAAN_HPP
#define _KENDARAAN_HPP

using namespace std;

class Kendaraan {
    public:
        /* default ctor */
        Kendaraan();
        /* user-defined ctor */
        Kendaraan(string kategori, string merk, int tahun);
        /* cctor */
        Kendaraan(const Kendaraan&);
        /* dtor */
        ~Kendaraan();
        /* asssignment operator */
        Kendaraan& operator=(const Kendaraan&);
        /* mencetak semua informasi yang dimiliki oleh Kendaraan */
        void printInfo();
        /* 
            menghitung dan menghasilkan biaya peminjaman dengan kebijakan yang berbeda tergantung jenis Kendaraan-nya sbb.:
            - mobil     : 500 ribu * lamaSewa.
            - bus       : 1 juta * lamaSewa.
            - minibus   : Jika lamaSewa kurang dari 5 hari, maka 5 juta. Jika lebih, 5 juta + 500 ribu * (lamaSewa – 5).
        */
        int biayaSewa(int lamaSewa);
    private:
        static int nomorKendaraan;
        int nomor;
        /* kategori : "mobil", "bus", or "minibus" */
        string kategori;
        string merk;
        /* tahun keluaran kendaraan */
        int tahun;
};

#endif