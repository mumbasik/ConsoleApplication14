


#include <iostream>
#include <cmath>
using namespace std;

int main()
{ //N1!
	for (int i = 100; i < 999; i++) {
		int summa = 0;
		int x = i % 10;
		int y = i / 10;
		if (y == x) {                                      // как посчитать количество целых чисел у которых одинак 2 цифры
			summa++;
			cout << "Overall summa " << summa << "\n";
		}
	}
	//N2!
	int result = 0;
	int first;
	int second;
	int third;
	int a;

	for (int o = 100; o < 999; o++) {
		a = o / 10;
		third = o % 10;
		second = a % 10;
		first = a / 10;
		if (first != third && second != third && first != second) {
			result++;
		}


	}
	cout << "Overall result" << result << "\n";

	//N3!
	int numbers;
	int anothernumb;
	int p = 0;
	int t = 1;
	int f;
	cout << "Number: \n";
	cin >> numbers;
	while (numbers > 0);
	p = numbers % 10;
	if (p == 3 && p == 6) {
		f = t * p;
		anothernumb += f;
		numbers = numbers / 10;


	}
	cout << "Overall number: " << anothernumb << "\n";

	//N5!
	int n;
	int sum = 0;
	int j;
	int cube;
	cout << "Enter number: \n";
	cin >> n;
	while (n != 0) {
		j = n % 10;
		sum += j;
		n /= 10;

	}
	cube = sum * (sum * sum);
	if (n * n == cube) {
		cout << "Equal \n";
	}
	else {
		cout << "isnt equal \n";
	}




	//N6!
	int numb;
	int res = 0;

	cout << "Your number: \n";
	cin >> numb;
	for (int u = 1; u < numb; u++) {
		if (res % u == 0) {
			res++;
			cout << "Result " << u << res << "\n";
		}
	}
	//N7!
	int firstnumb;
	cout << "First number: \n";
	cin >> firstnumb;
	int secondnumb;
	cout << "Second number: \n";
	cin >> secondnumb;

	int r = 0;
	for (int l = 1; l < secondnumb; firstnumb++) {
		if (firstnumb % l == 0 && secondnumb % l == 0); {
			r++;
			cout << "Overall " << r << l << "\n";
		}

	}
}