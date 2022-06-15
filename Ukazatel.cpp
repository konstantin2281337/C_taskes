#include <iostream>

using namespace std;

int func(int* mas, int N) {
	int minimum = mas[0];
	for (int i = 0; i < N; i++) {
		
		if (mas[i] < minimum) {
			minimum = mas[i];
		}
	}
	
	int *min = &minimum;
	cout << "Minimum: " << minimum << endl;
	cout << "Adress minimum: " << min << endl;
	
}


int main() {
	int len, N;
	
	cout << "Len mas: ";
	cin >> len;
	cout << "Input " << len << " numbers: ";
	
	int *mas = new int[len];
	
	for (int i = 0; i < len; i++) {
		cin >> mas[i];
	}
	
	cout << "Input N: ";
	cin >> N;
	
	if (N > len) {
		cout << "Error! It's big N";
	}
	
	else {
		func(mas, N);
	}
	
	delete[] mas; // удаляем неиспользуемую память, которую зарезервировали в строке 28
	cout << "Size of massive: " << sizeof(int) * len << endl;
}
