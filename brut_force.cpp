#include <iostream>
#include <cstdlib>


using namespace std;


int sequential_iteration() {
	char char_1, char_2, char_3;
	char letter_1 = 0, letter_2 = 0, letter_3 = 0;
	int counter = 0;
	char ASCII_all[]{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!#$%&()*+,-./:;<>?@[]^_{}|~"}; 

	cin >> char_1 >> char_2 >> char_3;

	for (int i = 0; i < 89; i++) {
		for (int j = 0; j < 89; j++) {
			for (int k = 0; k < 89; k++) {

				letter_1 = ASSII_all[i];
				letter_2 = ASCII_all[j];
				letter_3 = ASCII_all[k];
				counter++;

				if (char_1 == letter_1 and char_2 == letter_2 and char_3 == letter_3) {
					cout << " " << endl;
					cout << letter_1 << letter_2 << letter_3 << endl;
					cout << counter << endl;;
				}
			}
		}
	}

	return 0;
}


int random_brute_force() {

	char ASCII_all[]{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!#$%&()*+,-./:;<>?@[]^_{}|~"}; 
	char char_1, char_2, char_3;
	char letter_1 = 0, letter_2 = 0, letter_3 = 0;
	int counter = 0;

	cin >> char_1 >> char_2 >> char_3;

	while (char_1 != letter_1 || char_2 != letter_2 || char_3 != letter_3) {
		letter_1 = ASCII_all[rand() % 89]; 
		letter_2 = ASCII_all[rand() % 89]; 
		letter_3 = ASCII_all[rand() % 89]; 
		counter++;
	}
	cout << " " << endl;
	cout << letter_1 << letter_2 << letter_3 << endl;
	cout << counter << endl;

	return 0;
}


int main() {
	sequential_iteration();
	random_brute_force();
}