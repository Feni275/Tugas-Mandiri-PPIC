#include <iostream>

using namespace std;

int main(){
	int a, t;
	float luas;
	
	cout << "Inputkan alas : ";
	cin >> a;
	cout << "Inputkan tinggi : ";
	cin >> t;
	
	luas = 0.5 * a*t;
	cout << "Luas segitiga = " <<luas;
}