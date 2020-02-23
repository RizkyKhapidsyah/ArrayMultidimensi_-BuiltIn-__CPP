#include <iostream>
#include <conio.h>

using namespace std;

void printArray(int*, int, int);

int main()
{
	//Multidimensi Array dengan menggunakan Array Standard 

	//Array Multidimensi
	//array[baris][kolom]

	int arrayMD[2][2] = { 1, 2, 3, 4 };

	cout << "-----------CONTOH 1-----------\n";
	cout << arrayMD[0][0] << " " << arrayMD[0][1] << endl;
	cout << arrayMD[1][0] << " " << arrayMD[1][1] << endl;

	cout << "\n-----------CONTOH 2-----------\n";
	printArray(*arrayMD, 2, 2);

	cout << "\n-----------CONTOH 3-----------\n";
	const int bariss = 2;
	const int kolomm = 2;
	printArray(*arrayMD, bariss, kolomm);


	_getch();

	return 0;
}

void printArray(int* ptrArray, int baris, int kolom) {
	int index = 0;
	for (int i = 0; i < baris; i++)
	{
		cout << "[ ";
		for (int j = 0; j < kolom; j++)
		{
			cout << *(ptrArray + index) << " ";
			index++;
		}
		cout << "]" << endl;
	}
}