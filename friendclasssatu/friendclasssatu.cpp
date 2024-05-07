#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setnama(string pNama);
    friend class siswa;

};

class siswa
{
private:
    int id;


public:
    void setid(int pid);
    void displayAll(orang& a);
};

class siswa
{
public:
    void setid(int pid);
    void displayAll(orang& a);
};
void siswa::displayAll(orang& a)
{
    cout << id << endl << a.nama;
}
void orang::setNama(orang pNama)
{
    nama = pNama;
}
void siswa::setid(int pid)

{
    id = pid;
}

int main()
{
    orang joko;
    joko
}

