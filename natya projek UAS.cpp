#include <iostream>
using namespace std;
struct kwetiaw{
    string kwg_1, kwg_2, kwg_3, nsgrg_4, nsgrg_5, nsgrg_6, mikn_7, mikn_8, mikn_9;
};

void menu_makan ();

int main(){
 menu_makan();
}

void menu_makan () {
	kwetiaw grg[9];
		grg[0].kwg_1   = "Rp.20.000,00";
		grg[1].kwg_2   = "Rp.25.000,00";
		grg[2].kwg_3   = "Rp.32.000,00";
		grg[3].nsgrg_4 = "Rp.45.000,00";
		grg[4].nsgrg_5 = "Rp.33.000,00";
		grg[5].nsgrg_6 = "Rp.30.000,00";
		grg[6].mikn_7  = "Rp.70.000,00";
		grg[7].mikn_8  = "Rp.35.000,00";
		grg[8].mikn_9  = "Rp.40.000,00";


	 int pilihan, totalPaket, banyak, hasil = 0, totalSeluruhPesanan;
	 char pilihanPaket, yesNo;
	 int diskon = 5;
	 int x=0;

		 	cout <<"=====PROGRAM  MENU TOKO MAKANAN SEDERHANA===== "<<endl;
		    cout <<"List Menu & Paket : "<<endl;
		    cout <<"1. Kwetiaw Goreng"<<endl;
		    cout <<"2. Nasi Goreng"<<endl;
		    cout <<"3. Masakan Ikan"<<endl;

		 do{
			cout<<"Masukan Menu Yang Di Pilih : ";
			cin>>pilihan;

				switch(pilihan){
								case 1:
										    cout<<"List Paket Kwetiaw Goreng"<<endl;
										    cout<<"A. Kwetiaw Goreng Sambal Matah : ";
										    cout<< grg[0].kwg_1 << endl;
										    cout<<"B. Kwetiaw Goreng Seafood      : ";
										    cout<< grg[1].kwg_2 << endl;
										    cout<<"C. Kwetiaw Goreng Kumplit      : ";
										    cout<< grg[2].kwg_3 << endl;
										    cout<<"Masukkan Pilihan Paket : ";
										    cin>>pilihanPaket;

										    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
										     totalPaket = 20000;
										    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
										     totalPaket = 25000;
										    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
										     totalPaket = 32000;
										    } else {
										     cout<<"Paket Tidak Tersedia"<<endl;
										    }

										    cout<<"Berapa Banyak Pesanan? ";
										    cin>>banyak;

										    totalSeluruhPesanan = totalPaket * banyak;
										    cout << "total pesanan :" << totalSeluruhPesanan<< endl;

										    cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
										    cin>>yesNo;

										   break;

								   	case 2:
										    cout<<"List Paket Nasi Goreng"<<endl;
										    cout<<"A. Nasi Goreng Spesial : ";
										    cout<< grg[3].nsgrg_4<<endl;
										    cout<<"B. Nasi Goreng Bakso   : ";
										    cout<< grg[4].nsgrg_5<< endl;
										    cout<<"C. Nasi Goreng Sosis   : ";
										    cout<< grg[5].nsgrg_6 <<endl;

										    cout<<"Masukkan Pilihan Paket : ";
										    cin>>pilihanPaket;;

										    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
										     totalPaket = 45000;
										    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
										     totalPaket = 33000;
										    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
										     totalPaket = 30000;
										    } else {
										     cout<<"Paket Tidak Tersedia"<<endl;
										    }

										    cout<<"Berapa Banyak Pesanan? ";
										    cin>>banyak;

										    totalSeluruhPesanan = totalPaket * banyak;
										    cout << "total pesanan : " << totalSeluruhPesanan << endl;

										    cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
										    cin>>yesNo;
										   break;

								  	case 3:
										    cout<<"List Paket Masakan Ikan"<<endl;
										    cout<<"A. Ikan Gurame Goreng \t: ";
										    cout<< grg[6].mikn_7 <<endl;
										    cout<<"B. Ikan Nila Goreng   \t: ";
										    cout<< grg[7].mikn_8 <<endl;
										    cout<<"C. Ikan Bakar Madu    \t: ";
										    cout<< grg[8].mikn_9 <<endl;

										    cout<<"Masukkan Pilihan Paket : ";
										    cin>>pilihanPaket;;

										    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
										     totalPaket = 70000;
										    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
										     totalPaket = 35000;
										    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
										     totalPaket = 40000;
										    } else {
										     cout<<"Paket Tidak Tersedia"<<endl;
										    }

										    cout<<"Berapa Banyak Pesanan? ";
										    cin>>banyak;

										    totalSeluruhPesanan = totalPaket * banyak;
										    cout << "total pesanan :" << totalSeluruhPesanan << endl;

										    cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
										    cin>>yesNo;

										   break;

		  						}
		  					x++;
		 	} while(yesNo == 'Y' || yesNo == 'y');

		 cout<<"Pembayaran : "<<endl;

		 for(int n=0;n<x;n++){
		  hasil=hasil+totalSeluruhPesanan;
		 }

 cout<<"Total Pesanan : "<<hasil<<endl;
 cout<<"Diskon 5%     : "<<hasil/diskon<<endl;
 cout<<"Total Bayar   : "<<hasil - (hasil/diskon)<<endl;
}
