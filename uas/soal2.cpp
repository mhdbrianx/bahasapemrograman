#include <iostream>
using namespace std;
void nama(){
    string nama;
    cout << "Masukan Nama : ";
    getline(cin, nama);
    cout << "Nama anda : " << nama << endl;
    
};

void nim(){
    string nim;
    cout << "Masukan NIM : ";
    cin>>nim;
   cout << "NIM anda : " << nim << endl;
};

int main(){
    nama();
    nim();
   return 0;
}