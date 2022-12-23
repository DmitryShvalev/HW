#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");
	int m,n,k,f,i,g,a,p;	
	cout << "введите длинну масива: ";
	cin >> n;
	cout << "введите элемент который нужно удалить: ";
	cin >> f;
	cout << "с какого элемента добавлять: ";
	cin >> k;
	cout << "количество добавляемых элементов: ";
	cin >> m;
	int* mas = new int[n];
	int h = k + m;
	int* mas1 = new int[h];	
	for (i = 0; i <= n; i++) {
		mas[i] = rand() % 100;
	}
	for (a = 0; a < n; a++) {
		cout << mas[a];
		cout << " ";
	}
	cout << "\n";
	for (a = 0; a < f - 1; a++) {
		cout << mas[a];
		cout << " ";
	}
	for (a = f; a < n; a++) {
		cout << mas[a];
		cout << " ";
	}
	cout << "\n";
	for (int a = 0; a < n; a++) {
		if (a == k) {
			if (a <= k + m) {
				for (int y = 0; y < m; y++) {
					mas1[a] = rand() % 100;
					a++;
				}
			}
		}
		else
			mas1[a] = mas[a];
	}
	for (a = 0; a < h; a++) {
		cout << mas1[a];
		cout << " ";
	}
	for (a = k; a < n; a++) {
		cout << mas[a];
		cout << " ";
	}
}