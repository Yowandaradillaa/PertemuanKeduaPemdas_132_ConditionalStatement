#include <iostream>
using namespace std;


int main()
{
	float nMat, nFis, rerata;
	string status;

	cout << "Masukan nilai Matematika = ";
	cin >> nMat;
	cout << "Masukan nilai Fisika = ";
	cin >> nFis;

	rerata = (nFis + nMat) / 2;

	if (rerata >= 60) {
		status = "Lulus jalur rerata";
	}
	else if (nMat >= 70) {
		status = "Lulus jalur nilai Matematika";
	}
	else
	{
		status = "Tidak lulus";
	}

	cout << "Statusnya adalah " << status << endl;

	system("pause");

	return 0;
}

