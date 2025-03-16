# TP3DPBO2025C1

# Janji
Saya Shizuka Maulia Putri NIM 2308744 mengerjakan Tugas Praktikum 3 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Desain

![image](https://github.com/user-attachments/assets/4a010967-049d-4e9f-a03c-efa0549a4f40)

Terdiri dari 8 kelas, di mana kelasKomponen adalah parent dari class Cpu, Ram, dan Harddrive,  karena ketiga komponen ini merupakan bagian inti dari sebuah komputer dan memiliki atribut dasar yang sama, seperti merek dan nama. Harddrive, selain mewarisi dari Komponen, juga memiliki parent lain yaitu HardwareKomponen, yang menunjukkan bahwa harddrive adalah bagian dari perangkat keras yang memiliki karakteristik tambahan seperti model dan konsumsi daya. Kelas Komputer memiliki hubungan composite dengan Cpu, Ram, Harddrive, dan Peripheral, yang berarti setiap objek Komputer memiliki beberapa komponen tersebut. Kelas StorageKomponen merupakan kelas yang mewarisi dari Ram dan Harddrive, karena mencerminkan kombinasi antara penyimpanan dan memori, misalnya untuk menyimpan informasi kecepatan baca/tulis sekaligus detail kapasitas RAM dan harddisk. 


Class Komponen terdiri dari atribut-atribut berikut:
1. merk
2. nama
   
Class Cpu terdiri dari atribut-atribut berikut:
1. jumlahCore
2. kecepatanGHz
   
Class Ram terdiri dari atribut-atribut berikut:
1. kapasitasGB
2. ddr
   
Class Harddrive terdiri dari atribut-atribut berikut:
1. kapasitasGB
2. tipeDrive
   
Class Peripheral terdiri dari atribut-atribut berikut:
1. tipe
2. tipeKoneksi
3. fitur
   
Class Komputer terdiri dari atribut-atribut berikut:
1. nama
2. cpu
3. ramlist
4. harddrive
5. peripheralList
   
Class HardwareKomponen terdiri dari atribut-atribut berikut:
1. model
2. konsumsiDayaWatt
   
Class StorageKomponen terdiri dari atribut-atribut berikut:
1. kecepatanBaca
2. kecepatanTulis

# Alur Program
Program ini bertujuan untuk menampilkan informasi tentang komputer dan informasi storage komponen. Pertama membuat beberapa objek dari kelas dengan berbagai spesifikasi, seperti CPU Intel dan AMD, RAM dengan kapasitas yang berbeda, serta harddrive dari berbagai merek. Selanjutnya, membuat objek dari kelas komputer  dengan mengombinasikan komponen-komponen tersebut, lalu disimpan dalam list vektor. Program kemudian menampilkan informasi detail setiap komputer, termasuk spesifikasi CPU, RAM, harddrive. Lalu membuat objek dari kelas storagekomponen yang isinya sesuai dengan parameter atribut dari kelasnya. Objek tersebut kemudian disimpan dalam list vektor agar bisa menampilkan jika ada lebih dari 1 informasi storage komponen. Menampilkan informasi detail dari kelas storage komponen. 
# Dokumentasi
cpp

![image](https://github.com/user-attachments/assets/2c5e2dd0-799b-4072-a68e-5ab54446f4ec)

python

![image](https://github.com/user-attachments/assets/67b023cc-556e-4ac9-ab81-07708ddc5918)



