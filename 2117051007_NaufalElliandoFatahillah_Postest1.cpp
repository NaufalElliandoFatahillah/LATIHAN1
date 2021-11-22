#include <iostream>
using namespace std;

int main(){
//	Nama : Naufal Elliando Fatahillah
//	NPM : 2117051007
//	Kelas : B
	
	//-----String-----//
	string NPM, tanggal_lahir, bulan_lahir, tahun_lahir;
	
	//-----Input-----//
	cout<<"Masukan NPM\t\t: "; getline(cin, NPM);
	cout<<"Masukan tanggal lahir\t: "; getline(cin, tanggal_lahir);
	cout<<"Masukan bulan lahir\t: "; getline(cin, bulan_lahir);
	cout<<"Masukan tahun lahir\t: "; getline(cin, tahun_lahir);
	
	cout << endl << endl;
	
	//-----Output-----//
	cout<<"UserName dari NPM\t\t\t : " << NPM << endl;
	cout<<"Password dari input taggal lahir\t : " << tahun_lahir << "" << bulan_lahir << "" << tanggal_lahir << endl;
	
	
	return 0;
}
