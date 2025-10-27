#include <iostream>
#include <fstream>

using namespace std;

struct data_kas{
	char nama[70];
	int NPM;
	int uang;
	int tgl;
	char pgl[70];
}kas;

int menambahkan(){
	ofstream fileku("Data Uang Kas.txt", ios::app);
	if(fileku.is_open()){
		cout<<"===============Menambahkan Data Mahasiswa===============\n";
		cout<<"Masukan Nama : "; cin>>kas.nama;
		cout<<"Masukkan NPM : "; cin>>kas.NPM;
		fileku<<"List Mahasiswa\n";
		fileku<<"Nama	: "<<kas.nama<<endl;
		fileku<<"NPM	: "<<kas.NPM<<endl;
		fileku<<"\n";
		cout<<"\n";
		fileku.close();
	}else{
		cout<<"TIDAK BISA MEMBUKA FILE!!! \n\n";
	}
}

int memasukan(){
	ofstream fileku("Data Uang Kas.txt", ios::app);
	if(fileku.is_open()){
		cout<<"===============Masukkan Data Kas===============\n";
		cout<<"Masukkan Tanggal : "; cin>>kas.tgl;
		cout<<"Masukkan NPM : "; cin>>kas.NPM;
		cout<<"Masukkan uang : "; cin>>kas.uang;
		fileku<<"Pemasukkan\n";
		fileku<<"Tanggal: "<<kas.tgl<<endl;
		fileku<<"NPM	: "<<kas.NPM<<endl;
		fileku<<"Uang	: "<<kas.uang<<endl;
		fileku<<"\n";
		cout<<"\n";
		fileku.close();
	}else{
		cout<<"TIDAK BISA MEMBUKA FILE!!! \n\n";
	}
}

int pengeluaran(){
	ofstream fileku("Data Uang Kas.txt", ios::app);
	if(fileku.is_open()){
		cout<<"===============Pengeluaran Data Kas===============\n";
		cout<<"Masukkan Tanggal : "; cin>>kas.tgl;
		cout<<"Masukkan pengeluaran uang : "; cin>>kas.uang;
		cout<<"Keterangan pengeluaran : "; cin>>kas.pgl;
		fileku<<"Pengeluaran\n";
		fileku<<"Tanggal	: "<<kas.tgl<<endl;
		fileku<<"Uang		: "<<kas.uang<<endl;
		fileku<<"Keterangan	: "<<kas.pgl<<endl;
		fileku<<"\n";
		cout<<"\n";
		fileku.close();
	}else{
		cout<<"TIDAK BISA MEMBUKA FILE!!! \n\n";
	}
}

int melihat(){
	string line;
	ifstream fileku("Data Uang Kas.txt");
	if(fileku.is_open()){
		while(getline(fileku, line)){
			cout<<line<<endl;
		}
		fileku.close();
	}else{
		cout<<"TIDAK BISA MEMBUKA FILE!!! \n\n";
	}
}

int keluar(){
	exit(0);
}

int main(){
	int pilihan;
	menu :
		cout<<" ================DATA KAS===============\n";
		cout<<" | 1. Manambahkan Data Mahasiswa       |\n";
		cout<<" | 2. Memasukan Data Kas               |\n";
		cout<<" | 3. Pengeluaran Data Kas             |\n";
		cout<<" | 4. Melihat Data Kas                 |\n";
		cout<<" | 5. Keluar                           |\n";
		cout<<" =======================================\n";
		cout<<" \n";
			cout<<" Pilihan : "; cin>>pilihan;
			system("cls");
			switch(pilihan){
				case 1:
					menambahkan();
					goto menu;
					break;
				case 2:
					memasukan();
					goto menu;
					break;
				case 3:
					pengeluaran();
					goto menu;
					break;
				case 4:
					melihat();
					goto menu;
					break;
				case 5:
					keluar();
					break;
			default:
				cout<<"Kode yang anda masukan salah! \n\n";
				goto menu;
				break;
			}
}
