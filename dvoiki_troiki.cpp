#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;


int main() {
	srand(time(NULL));
	int i, j;
	int mas1[100];
	int mas2[100] {0};
	int summa_two, summa_three;
	
	for (i=0; i < 100; i++) {
		mas1[i] = (rand() % 100);
		cout << mas1[i] << " ";
		
	}
	
	cout << endl;
	
	
	for (i=0; i < 100; i++) {
		for (j=0; j < 100; j++) {
			if (mas1[i] == j) {
				mas2[j] += 1;
			}
		}
	}
	
	
	for (i=0; i < 100; i++) {
		summa_two += mas2[i]/2;
		summa_three += mas2[i]/3;
		cout << i << ' ' << mas2[i]/2 << ' ' << mas2[i]/3 << endl;
	}
	cout << "two: " << summa_two << endl;
	cout << "three:" << summa_three;
}
