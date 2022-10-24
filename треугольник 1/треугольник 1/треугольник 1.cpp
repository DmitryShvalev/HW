#include <iostream>
using namespace std;
int main() {
	setlocale(0, "rus");
	int n, m = 0;
	cout << "Ведите n (n > 2): ";
	cin >> n;
	if (n <= 2){
		while (n <= 2){
			m = m++;
			if (m == 3) {
				cout << "дорогой пользователь, лимит неправильных попыток ввода значения n исчерпан, программа закончила свою работу" << " " << "\n";
				return 0;
			}
			cout << "данному треугольнику нельзя задавать такое значение катета, пожалуйста введите новое значение n (n > 2): ";
			cin >> n;
		}
	}
	int l = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - l; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= l; k++)
			cout << "*";
		cout << "\n";
		l++;
	}
	return 0;
}
