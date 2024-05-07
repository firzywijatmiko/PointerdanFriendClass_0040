


#include <iostream>
using namespace std;




class mahasiswa
{
public:
    void showNin()
    {
        cout << "No Induk = " << nim << endl;
    }

};

int main()
{
    mahasiswa *mhs = new mahasiswa{ 1 };
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}
