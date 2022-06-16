#include <iostream>
#include <vector>
#include <ctime>

using namespace std;


int main() {
	int i, j;
	int size;

	cout << "Input vector size: ";
	cin >> size;

	vector <vector<int> > vect(size); // Создали двумерный вектор



	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			vect[i].push_back(rand() % 10);
		}
	}


	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << vect[i][j] << " ";
		}

		cout << endl;
	}

	cout << " " << endl;

	for (i = 0; i < size; i++) { // Меняем местами элементы главной и побочной диагонали матрицы
		int x;
		x = vect[i][i];
		vect[i][i] = vect[i][size - 1 - i];
		vect[i][size - 1 - i] = x;
	}

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {

			cout << vect[i][j] << " ";
		}

		cout << endl;
	}

	srand(time(NULL));
}
