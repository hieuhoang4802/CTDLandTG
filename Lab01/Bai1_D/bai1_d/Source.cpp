#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

#include "thuvien.h"

void chayct();

int main()
{
	chayct();
	_getch();
	return 1;
}

void chayct()
{
	int a[MAX], n;
	int l, r;
	int min = 0, max = 0;
	cout << "\nn= "; cin >> n;
	nhapday(a, n);
	cout << "\nl= "; cin >> l;
	cout << "\nr= "; cin >> r;
	minmax(a, l, r, min, max);
	cout << "\nDay da cho : \n";
	xuatday(a, n);
	cout << "\nMina[" << l << ",...," << r << "] = " << min;
	cout << "\nMaxa[" << l << ",...," << r << "] = " << max<<endl;

}