// Question 2

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <string>
#include <vector>

void transpose(int inputMatrix[4][4]);
void display(int inputMatrix[4][4]);

using namespace std;

int transposeMatrix[4][4];

int main() {

	int matrix[4][4];

	cout << "Enter values for a 4x4 matrix: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4;j++) {
			cin >> matrix[i][j];
		}
	}

	cout << endl;
	transpose(matrix);

	cout << "The Original Matrix: " << endl;
	cout <<"--------------------------";
	display(matrix);
	cout << "--------------------------";
	cout << endl;

	cout << "Transposed Matrix: " << endl;
	cout << "--------------------------";
	display(transposeMatrix);
	cout << "--------------------------";
	cout << endl;

	system("pause");
	return 0;
}

void transpose(int inputMatrix[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			transposeMatrix[i][j] = inputMatrix[j][i];
		}
	}
}

void display(int inputMatrix[4][4]) {
	cout << endl;
	for (int i = 0; i < 4;i++) {
		for (int j = 0; j < 4;j++) {
			cout << inputMatrix[i][j] << "\t";
		}
		cout << endl;
	}
}

