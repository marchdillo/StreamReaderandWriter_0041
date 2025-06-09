#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string namaFile;
    cout << "Masukkan nama file: ";
    cin >> namaFile;

    ofstream outfile;
    outfile.open(namaFile + ".txt");
};