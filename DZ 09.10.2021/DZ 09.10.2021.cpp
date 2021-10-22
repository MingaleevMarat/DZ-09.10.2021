// DZ 09.10.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//16:
void printMatrix(int matrix[3][3])
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
//1:
int sumMatrix(const int matrix[3][3])
{
	int sum = 0;
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			sum += matrix[i][j];
	return sum;
}

//2:
int proizvMatrix(const int matrix[3][3])
{
	int proizv = 1;
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			proizv *= matrix[i][j];
	return proizv;
}
int maxMatrix(const int matrix[3][3])
{
	int max = matrix[0][0];
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			if (matrix[i][j] > max)
				max = matrix[i][j];
	return max;
}
int minMatrix(const int matrix[3][3])
{
	int min = matrix[0][0];
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			if (matrix[i][j] < min)
				min = matrix[i][j];
	return min;
}

int sumDMatrix(const int matrix[3][3],const int rows)
{
	int sumD = 0;
	for (size_t i = 0; i < rows; i++)
	{
		sumD += matrix[i][i];
	}
			
	return sumD;
}

int proizvDMatrix(const int matrix[3][3], const int rows)
{
	int proizvD = 1;
	for (size_t i = 0; i < rows; i++)
	{
		proizvD *= matrix[i][i];
	}

	return proizvD;
}

int MaxDMatrix(const int matrix[3][3], const int rows)
{
	int maxD= matrix[0][0];
	for (size_t i = 0; i < rows; i++)
	{
		if (matrix[i][i] > maxD)
			maxD = matrix[i][i];
	}

	return maxD;
}

int MinDMatrix(const int matrix[3][3], const int rows)
{
	int minD = matrix[0][0];
	for (size_t i = 0; i < rows; i++)
	{
		if (matrix[i][i] < minD)
			minD = matrix[i][i];
	}

	return minD;
}

int sumDpobMatrix(const int matrix[3][3], const int rows)
{
	int sumDpob = 0;

	for (size_t i = 0; i < rows; i++)
	{
		sumDpob += matrix[i][rows-1-i];
	}

	return sumDpob;
}

int proizvDpobMatrix(const int matrix[3][3], const int rows)
{
	int proizvDpob = 1;

	for (size_t i = 0; i < rows; i++)
	{
		proizvDpob *= matrix[i][rows - 1 - i];
	}

	return proizvDpob;
}

int MaxDpobMatrix(const int matrix[3][3], const int rows)
{
	int maxDpob = matrix[0][0];

	for (size_t i = 0; i < rows; i++)
	{
		if (maxDpob < matrix[i][rows - 1 - i])
			maxDpob = matrix[i][rows - 1 - i];
	}

	return maxDpob;
}

int MinDpobMatrix(const int matrix[3][3], const int rows)
{
	int minDpob = matrix[0][0];

	for (size_t i = 0; i < rows; i++)
	{
		if (minDpob > matrix[i][rows - 1 - i])
			minDpob = matrix[i][rows - 1 - i];
	}

	return minDpob;
}

void minMatrixIsMax(const int matrix[3][3], const int rows, const int columns, int array[] )
{
	for (size_t i = 0; i < rows; i++)
	{
		array[i]= matrix[i][i];
		for (size_t j = 0; j < columns; j++)
		{
			if (array[i] < matrix[i][j])
				array[i] = matrix[i][j];
		}
	}
}

int minMax(int array[], const int rows)
{
	int minM = array[0];
	for (size_t i = 0; i < rows; ++i)
	{
		if (minM > array[i])
			minM = array[i];
	}
	return minM;
}
int main() 
{
	srand(time(NULL));
	const size_t rows=3, columns=3;
	int matrix[rows][columns];
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			matrix[i][j] = rand() % 20 + 1;
	cout << "Your matrix: " << endl;
	printMatrix(matrix);

	
	int array[rows];

	//1
	cout << "Sum of your matrix: " << sumMatrix(matrix) << endl;
	//2
	cout << "Proizvedenie of your matrix: " << proizvMatrix(matrix) << endl;
	//3
	cout << "Max of your matrix: " << maxMatrix(matrix) << endl;
	//4
	cout << "Min of your matrix: " << minMatrix(matrix) << endl;\
    //5
	cout << "SumD of your matrix: " << sumDMatrix(matrix,rows) << endl;
	//6
	cout << "ProizvD of your matrix: " << proizvDMatrix(matrix, rows) << endl;
	//7
	cout << "MaxD of your matrix: " << MaxDMatrix(matrix,rows) << endl;
	//8
	cout << "MinD of your matrix: " << MinDMatrix(matrix, rows) << endl;
	//9
	cout << "SumDpob of your matrix: " << sumDpobMatrix(matrix, rows) << endl;
	//10
	cout << "ProizvDpob of your matrix: " << proizvDpobMatrix(matrix, rows) << endl;
	//11
	cout << "MaxDpob of your matrix: " << MaxDpobMatrix(matrix, rows) << endl;
	//12
	cout << "MinDpob of your matrix: " << MinDpobMatrix(matrix, rows) << endl;
	//13
	 minMatrixIsMax(matrix, rows, columns,array);
	 cout << minMax(array, rows);
	 //14
	 return 0;
}

