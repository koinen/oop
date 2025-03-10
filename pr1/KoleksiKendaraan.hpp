#ifndef _KOLEKSIKENDARAAN_HPP
#define _KOLEKSIKENDARAAN_HPP
#include "Kendaraan.hpp"

class KoleksiKendaraan {
    public:
        /* default ctor, size = 100 */
        KoleksiKendaraan();
        /* user-defined ctor */
        KoleksiKendaraan(int size);
        /* cctor */
        KoleksiKendaraan(const KoleksiKendaraan&);
        /* dtor */
        ~KoleksiKendaraan();
        /* assignment operator */
        KoleksiKendaraan& operator=(const KoleksiKendaraan&);
        /* mencetak data semua kendaraan dalam suatu KoleksiKendaraan */
        void printAll();
        /* menambahkan sebuah Kendaraan ke dalam array of Kendaraan sebagai elemen yang terakhir */
        KoleksiKendaraan& operator<<(Kendaraan& k);
        /* 
        menambahkan semua Kendaraan dari KoleksiKendaraan lain ke dalam array Kendaraan. Jika banyaknya Kendaraan yang akan
        ditambahkan melebihi kapasitas array, maka yang ditampung hanya sejumlah kendaraan yang dapat dimuat. 
        */
        KoleksiKendaraan& operator<<(KoleksiKendaraan& kol);
    private:
        Kendaraan* koleksi;
        int size;
        int nEff;
};
#endif