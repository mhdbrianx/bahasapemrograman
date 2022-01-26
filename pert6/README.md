// source1.cpp

*Kode porgram ini menggunakan struktur fungsi dengan variabel CetakUmur, diisi menggunakan tipe data integer dan variabel umur. Didalam fungsi cetakUmur terdapat sebuah kode yang berguna untuk menampilkan kode ke layar yaitu "printf". Setelah itu fungsi tersebut dipanggil didalam int main() dan pemanggilan fungsi cetakUmur diisi dengan nilai 20.*

1. #include <stdio.h>
   Fungsinya digunakan untuk memasukkan sebuah file yang memungkinkan kita mengakses berbagai fitur tambahan.

2. using namespace std
   perintah ini digunakan untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std.

3. void ()
   Fungsinya digunakan sebagai prosedur yang tidak mengembalikan nilai keluaran yang didapat dari hasil proses tersebut

4. printf()
   Fungsinya digunakan untuk menampilkan output ke layar komputer

5. int main()
   Fungsinya digunakan untuk mengeksekusi pertama kali saat program dijalankan

6. integer
   Fungsinya digunakan untuk mengelompokkan variabel yang isinya bilangan bulat

7. getchar()
   Fungsinya digunakan untuk dipakai membaca sebuah karakter dengan sifat karakter yang dimasukkan tidak perlu diakhiri dengan menekan tombol ENTER, dan karakter yang dimasukan tidak akan ditampilkan di layar.

8. return 0
   Fungsinya digunakan untuk mengakhiri eksekusi dari function tersebut
   Input -> { #include <stdio.h>, using namespace std, getchar(), dan return 0 }
   Proses -> { void cetakUmur (int*umur) dan int main () }
   Output -> { printf ("Halo, Umur kamu adalah %d tahun", *umur), int angka = 20 dan cetakUmur(&angka) }

// source2.cpp

*Kode porgram ini menggunakan struktur fungsi dengan variabel CetakUmur, diisi menggunakan tipe data integer dan menggunakan pointer menuju variabel umur. Didalam fungsi cetakUmur terdapat sebuah kode yang berguna untuk menampilkan kode ke layar yaitu "printf". Setelah itu fungsi tersebut dipanggil didalam int main(),mendeklarasikan sebuah integer variabel angka dengan nilai 20 dan pemanggilan fungsi cetakUmur diisi dengan variabel angka tersebut diikuti oleh simbol & sebelum variabel angka.*

1. #include <iostream>
   Fungsinya digunakan untuk memanggil perintah input output seperti cin dan cout

2. using namespace std
   perintah ini digunakan untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std.

3. void
   Fungsinya digunakan sebagai prosedur yang tidak mengembalikan nilai keluaran yang didapat dari hasil proses tersebut

4. cout
   Fungsinya digunakan untuk menampilkan text dilayar laptop

5. int main()
   Fungsinya digunakan untuk mengeksekusi pertama kali saat program dijalankan

6. return 0
   Fungsinya digunakan untuk mengakhiri eksekusi dari function tersebut
   Input -> { #include <iostream>, using namespace std, dan return 0 }
   Proses -> { void Ucapan (void) dan int main () }
   Output -> { cout<<"Selamat Belajar C++"<<endl dan Ucapan() }

// Untuk Perbedaan kode program source1.cpp dengan source2.cpp adalah berikut ini
1. source1
   source1 menggunakan Pass by Value, artinya kita akan mempassing value sebagai parameter dalam fungsi yang 
   kita buat.

2. source2
   source 2 menggunakan Pass by Address berarti kita akan menggunakan pointer untuk mengakses atau bisa juga 
   mengubah value dari sebuah alamat.
   biasanya ditandai dengan adanya asterisk (*) dan ampersand(&).