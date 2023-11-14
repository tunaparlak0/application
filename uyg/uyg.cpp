#include <iostream>
#include <iomanip>

using namespace std;
struct bakteri {
	float sayi;
};

int main() {
	/*float bak1, bak2;
	bak1 = 100;
	bak2 = 120;*/
	bakteri bak1, bak2;
	bak1.sayi = 100;
	bak2.sayi = 120;
	cout << "HOUR" << setw(12) << "TYPE1" << setw(20) << "TYPE2" << endl;
	cout << "-------------------------------------" << endl;

	for (int i = 0; i <= 24; i++) {
		cout << fixed << setprecision(2) << i << setw(15) << bak1.sayi << setw(20) << bak2.sayi << endl;
		bak1.sayi = bak1.sayi * 1.5;
		bak2.sayi = bak2.sayi * 2.1;
	}








}