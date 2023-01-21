#include <iostream>

using namespace std;
void function(int num) {
	if (num != 1 && num != 2 && !(num % 2 == 0)) 
		cout << "Число є простим";
	else
		cout << "Число не є простим";
}

int main() {
	system("chcp 1251>nul");
	int num; cin >> num;

	function(num);

	return 0;
}

/*
Напишіть функцію, яка перевіряє, чи число, передане їй, є простим. Число є
простим, якщо воно ділиться без остачі лише собою й 1.
*/
