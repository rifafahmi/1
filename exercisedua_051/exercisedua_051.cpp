#include <iostream>
using namespace std;

class Penerbit {
public:
    int umur;

    Penerbit(int pUmur) :
        umur(pUmur)
    {
        cout << "Penerbit dibuat dengan umur " << umur << "\n" << endl;
    }
};

class Pengarang : public Penerbit {
public:

    Pengarang(int pUmur) :
        Penerbit(pUmur)
    {
        cout << "Pengarang dibuat\n" << endl;
    }
};
class buku : public Penerbit {
public:

    buku(int pUmur) :
        Penerbit(pUmur)
    {
        cout << "buku dibuat\n" << endl;
    }
};

class budi : public Pengarang, public buku {
public:

    budi(int pUmur) :
        Pengarang(pUmur),
        buku(pUmur)
    {
        cout << "Budi dibuat\n" << endl;
    }
};

int main() {
    budi a(12);

    return 0;
}