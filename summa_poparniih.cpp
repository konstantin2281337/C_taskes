#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;



int main() {
	int summa = 0, size = 4, i, j;
	int matrix[size][size];
	int count = 0;
	
	srand(time(NULL)); //???
	
	
	
	for (i=0; i < size; i++) {
		for (j=0; j < size; j++) {
				
			matrix[i][j] = (rand () % 2);
			
			if (matrix[i][j] == 0)
				matrix[i][j] = -1;
		}
	}
	
	
	
	for (int i=0; i < size; i++) {
		for (int j=0; j < size; j++) {
			if (i == 0) 
				summa += (matrix[i][j] * matrix[size - 1][j]) + (matrix[i][j] * matrix[i][size - 1]); //???
			else
				summa += (matrix[i][j] * matrix[i - 1][j]) + (matrix[i][j] * matrix[i][j - 1]); // ???
		}
	}
	
	
	
	for (int i=0; i < size; i++) {
		cout << '\n';
		for (int j=0; j < size; j++) {
			cout << matrix[i][j] << '\t';
			
		} 
	} 
	
	
	
	cout << '\n';
	cout << "Summa poparnih proizvedeniy: " << summa;
	return 0;
}
