#include <iostream>
#include <string>
using namespace std;

class JamTangan {
    public:
        void JenisJamTangan(string JamTangan);
        string MerkJamTangan;
        void HargaJamTangan(string harga);
    	void JumlahJamTangan (int jumlah);
                
        };
int main(){
    JamTangan digital,analog,chronograph,quartz; 

	digital.MerkJamTangan			="merk G-Shock ";
	analog.MerkJamTangan			="merk Swiss Army ";
	chronograph.MerkJamTangan		="merk Alexandre Christie  ";
	quartz.MerkJamTangan			="merk Seiko ";
	
	cout << "Jam Tangan Digital: \n";
	cout << (digital.MerkJamTangan);
	digital.HargaJamTangan("200000");
	digital.JumlahJamTangan(1);
	cout <<"===================================\n";
	
	cout << "Jam Tangan Analog: \n";
	cout << (analog.MerkJamTangan);
	analog.HargaJamTangan("300000");
	analog.JumlahJamTangan(1);
	cout <<"===================================\n";
	
	cout << "Jam Tangan Chronograph: \n";
	cout << (chronograph.MerkJamTangan);
	chronograph.HargaJamTangan("400000");
	chronograph.JumlahJamTangan(1);
	cout <<"===================================\n";
	
	cout << "Jam Tangan Quartz: \n";
	cout << (quartz.MerkJamTangan);
	quartz.HargaJamTangan("500000");
	quartz.JumlahJamTangan(1);
	cout <<"===================================\n";
	

	
	}
void JamTangan::JenisJamTangan(string JamTangan){
	cout <<"\n"<<"merk "<<JamTangan<<endl;
}	
void JamTangan::HargaJamTangan(string harga){
	cout <<"\n"<<"harga "<<harga<<endl;
}
void JamTangan::JumlahJamTangan (int jumlah){
	cout <<"\n"<<"jumlah "<<jumlah<<endl;

}
