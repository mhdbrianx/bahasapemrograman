#include <iostream>
using namespace std;

int main(){
    string nama;
    string nim;
    
    cout << "Masukan Nama : ";
    getline(cin, nama);
    cout << "Masukan NIM : ";
    cin>>nim;
    
    cout << "Nama : " << nama << endl;
    cout << "Alamat Nama : " << &nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "Alamat NIM : " << &nim << endl;
    
}