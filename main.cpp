#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "\x1b[6m[+]Введите положительное число для старта обратного отчёта!\x1b[0m\n";
	int num;
	cin >> num;

	if (num < 0) {
		cout << "\x1b[31mчисло не соответствует требованиям!x1b[0m";
		return 0;
	}

	while (num > 0) {
		cout << "Отсчёт" << num << endl;
		num = num - 1;

	}

	cout << "\x1b[92m[ + ] Старт!\x1b[0m";


}
