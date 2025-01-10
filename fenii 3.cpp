#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float sisi_miring, alas, tinggi;
	
	cout<<"program mencari sisi miring"<<endl;
	cout<<"---------------------------------"<<endl;
	
	cout<<"masukan alas : "; cin>>alas;
	cout<<"masukan tinggi : "; cin>>tinggi;
	
	sisi_miring = sqrt(pow(alas,2) + pow(tinggi,2) );
	
	cout<<"-------------------------------------------------"<<endl;
	
	cout<<"sisi miring = "<<sisi_miring;
	
	return 0;
}