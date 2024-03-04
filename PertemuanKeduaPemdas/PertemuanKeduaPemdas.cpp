#include <iostream>
using namespace std;

int main() {
	srand(time(0));


	int nBil = (rand() % 10);
	string status;

	if (nBil % 2 == 0) {
		status = "genap";
	}
	else {
		status = "ganjil";
	}
	cout << "Bilangan = " << nBil << endl;
	cout << "Status Bilangan = " << status << endl;

	system("pause");

	return 0;

}
