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

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    while (true)
    {
        cout << "- ";
        getline(cin, baris);
        if (baris == "q")
            break;
        outfile << baris << endl;
    }
    outfile.close();
    ifstream infile;
    infile.open(namaFile + ".txt");
};