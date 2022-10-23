#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int mas[100];
	int i;
	int j;
	int n;
	int g;

	for (i = 0; i < 100; i++) {

		mas[i] = rand() % 100;

	}

	for (n = 0; n < 100; n++) {

		cout << mas[n];
		cout << " ";

	}
	cout << "\n";
	cout << "Write the length of the array no more than 100";
	cout << "\n";
	cin >> g;
	for (i = 0; i < g; i = i + 3) {

		mas[i] = 0;

	}

	for (i = 0; i < g; i = i + 3) {

		for (j = i; j < 98 - i; j++);

		{

			mas[j] = mas[j + 1];

		}

		mas[99] = 0;

	}

	for (i = 1; i < g; i++) {

		if (mas[i] < 0)

		{

			for (j = i; j < 97 - i; j++); {

				mas[j + 2] = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = mas[j - 1] + 1;

			}

		}

		cout << mas[i];
		cout << " ";
	}
	system("pause");
	return 0;

}