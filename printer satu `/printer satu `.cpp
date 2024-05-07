// printer satu `.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class mahasiswa {
public:
    int nim;
    void shownim() {
        cout << "no induk = " << nim << end;
    }



};



int main()
{
    mahasiswa mhs{ 1 };
    mhs.shownim(); 

    mahasiswa& refmhs = mhs;
    refmhs.nim = 2;
    mhs.shownim();


    mahasiswa* pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->shownim();
    return 0;


}

