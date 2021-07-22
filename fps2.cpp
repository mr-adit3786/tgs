#include <iostream>
#include <array>
#include <string>

using namespace std;

struct RentalMobil
{
    string nama;
    string alamat;
    string nomerhp;
    int biaya;
    int kodemobil;
    int lamasewa;
    int tarif;
    int uang;
    int kurang;
    char menu[50];
    int i=0;
    int totalharga;
    int total;
    int harga[5]={300000, 400000, 500000, 900000, 800000};
};

// ukuran array
const int SIZE = 100;
// array untuk menyimpan data

RentalMobil rm[SIZE];
char get_menu();
void daftarmobil();
void rentalmobil();
// ------ Hasbi

int main()
{
    while (true)
    {
        char select = get_menu();
        if (select == '1')
            daftarmobil();
        else if (select == '2')
           rentalmobil();
           else if(select == '3')
            break;
    }
    return 0;
}

char get_menu()
{
    system("cls");
    cout << "Program Rental Mobil" << endl;
    cout << "[1] Pilih Jenis Mobil" << endl;
    cout << "[2] Sewa Mobil" << endl;
    cout << "[3] Exit" << endl;
    cout << " select = ";
    string sel;
    getline(cin, sel);
    return sel[0];
}//-------------- eden

void daftarmobil()
{
    system("cls");
    cout << "------------------------------ DAFTAR MOBIL --------------------------"<<endl;
    cout << " NO        DAFTAR MOBIL                        BIAYA Rp/HARI          "<<endl;
    cout << "----------------------------------------------------------------------"<<endl;
    cout << " [1]        AVANZA                              300.000                "<<endl;
    cout << " [2]        XENIA                               400.000                "<<endl;
    cout << " [3]        BRIO                                500.000                "<<endl;
    cout << " [4]        CIVIC                               900.000                "<<endl;
    cout << " [5]        ALPHARD                             800.000                "<<endl;
    cout << "----------------------------------------------------------------------"<<endl;
    cout << " Jika Ingin Menyewa Mobil, Silahkan tekan Enter dan pilih pilihan nomer 2"<<endl;
    
    system("pause");
}

void rentalmobil(){
    system("cls");
    cout << "----------------------------------------------------------------------"<<endl;
    cout << "      Silahkan Isi Data diri dan pembayaran untuk Syarat Sewa Mobil   "<<endl;
    cout << "----------------------------------------------------------------------"<<endl;
    cout << "                     Masukan Data Diri                                "<<endl;
    cout << "----------------------------------------------------------------------"<<endl;
    cout << " Masukan Nama Anda     : ";
    
    getline(cin,rm->nama);
    cout << " Masukan Alamat Rumah  : ";
    
    getline(cin,rm->alamat);
    cout << " Masukan Nomer Hp      : ";
    
    getline(cin,rm->nomerhp);
    cout << ""<<endl;
    cout << "----------------------------------------------------------------------"<<endl;
    cout << "                   Masukan Pilihan Mobil dan Pembayaran               "<<endl;
    cout << "----------------------------------------------------------------------"<<endl;
    cout << " Pilihlah Mobil Anda Berdasarkan Kode Angka   : ";
    cin >> rm->kodemobil;//----------- irfan

    
    switch(rm->kodemobil){
        //ulang:
        case 1:
				strcpy(rm->menu ,"AVANZA");
				rm->i = 0;	
				break;
        case 2:
				strcpy(rm->menu ,"XENIA");
				rm->i = 1;	
				break;
        case 3:
				strcpy(rm->menu ,"BRIO");
				rm->i = 2;	
				break;
        case 4:
				strcpy(rm->menu ,"CIVIC");
				rm->i = 3;	
				break;
        case 5:
				strcpy(rm->menu ,"AlPHARD");
				rm->i = 4;	
				break;
                default: 	// default berfungsi jika kode tidak ada yang sesuai
				cout << "Pilihan menu yang anda pilih tidak tersedia..." << endl;
               // goto ulang;
                
    }
 
    cout << " Anda memilih                                 :  " <<rm->menu <<endl; 
    cout << " lama Anda Menyewa/Hari                       :  ";
    cin >> rm->lamasewa;
    cout << " Total harga sewa                             : Rp. "<<rm->harga[rm->i]*rm->lamasewa<<endl;
    //cin >> rm->totalharga;
    cout << " Masukan Uang Anda                            : Rp. ";
    cin  >> rm->uang; // ----- Adit
   
    if(rm->uang < rm->harga[rm->i]*rm->lamasewa){
      cout << " uang anda kurang"<<endl;
      cout << " Uang Anda yang kurang                        : Rp. "<<rm->harga[rm->i]*rm->lamasewa - rm->uang<<endl;
      cout << " Silahkan Bayar Kekurangan uang anda          : Rp. ";
      cin  >> rm->kurang;
        if (rm->kurang == rm->harga[rm->i]*rm->lamasewa - rm->uang){
          cout << " oke sudah lunas"<<endl;
        }else if((rm->harga[rm->i]*rm->lamasewa - rm->uang) < (rm->kurang) ){
            cout << " uang anda kelebihan                          : Rp. "<< (rm->kurang) - (rm->harga[rm->i]*rm->lamasewa - rm->uang) <<endl;
        }
        
      }
      else if(rm->uang - rm->harga[rm->i]*rm->lamasewa ){
      cout << " Kembalian Anda                               : Rp. "<<rm->uang - rm->harga[rm->i]*rm->lamasewa<<endl;
      }
      cout << ""<<endl;
      cout << "----------------------------------------------------------------------"<<endl;
      cout << "                       STRUK PEMBAYARAN                               "<<endl;
      cout << "----------------------------------------------------------------------"<<endl;
      cout << "Nama               : "<<rm->nama<<endl;
      cout << "Alamat             : "<<rm->alamat<<endl;
      cout << "Nomer Hp           : "<<rm->nomerhp<<endl;
      cout << "Mobil Yang Disewa  : "<<rm->menu<<endl;
      cout << "Lama Sewa/hari     : "<<rm->lamasewa<<endl;
      cout << "Total Harga Sewa   : Rp. "<<rm->harga[rm->i]*rm->lamasewa<<endl;
      cout << "uang anda          : Rp. "<<rm->uang<<endl;
      cout << "kembalian          : Rp. "<<rm->uang - rm->harga[rm->i]*rm->lamasewa<<endl;
      cout << "----------------------------------------------------------------------"<<endl;
      cout << "    TERIMAKASIH SUDAH MENYEWA. DI JAGA BAIK BAIK YA MOBILNYA :D       "<<endl;
      cout << "----------------------------------------------------------------------"<<endl<<endl;
      cout <<"\n\n"<<endl;
    system("pause");//------- dzawan
}

