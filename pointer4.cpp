#include <iostream>
using namespace std;

class mahasiswa
{
    private:
        friend void setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string pNama)
{
    a.nama = pNama;
}

int main()
{
    mahasiswa joko;
    setNama(joko, "kairi kumar");
    return 0;
}