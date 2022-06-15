#include <iostream>


using namespace std;



int main(){
	int str1, stlb1, str2, stlb2, x;
	
	cout << "Input str1 and stlb1 for first matrix" << endl;
	cin >> str1 >> stlb1;
	cout << "Input str2 and stlb2 for second matrix" << endl;
	cin >> str2 >> stlb2;
	cout << endl;
	
	if (str1 != stlb2) { 
		cout << "You can't do it :(";
	}
	
	else {
		cout << "Count elements in first matrix: " << str1*stlb1 << endl;
		int matrix1[str1][stlb1];	
		for (int i = 0; i < str1; i++){
			for (int j = 0; j < stlb1; j++){
				cin >> x;
				matrix1[i][j] = x;
			}
		}
		cout << endl;
	
		cout << "Count elements in second matrix: " << str2*stlb2 << endl;
		int matrix2[str2][stlb2];	
		for (int i = 0; i < str2; i++){
			for (int j = 0; j < stlb2; j++){
				cin >> x;
				matrix2[i][j] = x;
			}
		}
		cout << endl;
		
		cout << "matrix1: " << endl;
		for (int i = 0; i < str1; i++){	
			for (int j = 0; j < stlb1; j++){
				cout << matrix1[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << endl;
		cout << "matrix2: " << endl;
		
		for (int i = 0; i < str2; i++){	
			for (int j = 0; j < stlb2; j++){
				cout << matrix2[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		
		int matrix_mlt[str1][stlb2]; 
		for (int i = 0; i < str1; i++){ 
			for (int j = 0; j < stlb2; j++){
				matrix_mlt[i][j] = 0;
			}
		}

		for (int i = 0; i < str1; i++){
			for (int j = 0; j < stlb2; j++){
				for (int k = 0; k < stlb1; k++){
					matrix_mlt[i][j] += matrix1[i][k] * matrix2[k][j];
				}
			}
		}	
		
		cout << "Matrix multiply: " << endl;
		
		for (int i = 0; i < str1; i++){ 
			for (int j = 0; j < stlb2; j++){
				cout << matrix_mlt[i][j] << " ";
			}
			cout << endl;
		}
	}
}
