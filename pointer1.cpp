#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No induk = " << nim << endl;
    }
};

int main (){
    mahasiswa mhs{1}; // object mhs
    mhs.showNIm(); // member Access Operator

    
}