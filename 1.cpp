
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main(){
	int JumlahKalori;
	double WaktuOlahraga;
	int n = 20;
	int a = 2;
	

	cout<<"Masukan Jumlah Kalori = "<<endl;
	cin>>JumlahKalori;

    WaktuOlahraga = 2* JumlahKalori / n ;
	    

	if (JumlahKalori > 750 ){
		cout<<"Jumlah Kalori = "<<JumlahKalori;
		cout<<"\n";
		cout<<"Olahraga = Lari\n";
	    cout<<"Waktu Olahraga = "<<WaktuOlahraga <<"Menit";
	}
	else if(JumlahKalori > 500 ){
		cout<<"Jumlah Kalori = "<<JumlahKalori;
		cout<<"\n";
		cout<<"Olahraga Badminton\n";
	    cout<<"Waktu Olahraga = "<<WaktuOlahraga <<"Menit";
	}

}
