// bai14_tinhgiaithua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "Luy Thua\n" << endl;
	int so, giaithua = 1;
	cout << "nhap so:\n";
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		giaithua *= i;
	}
	cout << so << "!" << "=" << giaithua << endl;
	return 0;
}