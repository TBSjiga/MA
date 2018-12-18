#pragma once
template <typename T>
ref class Matrix_Calculator
{
public: 
	T **Array;
	T Number;

	Matrix_Calculator(int number) {
		Number = number;
	}

	Matrix_Calculator(int n, int m) {
		Array = new T*[n];
		for (int i = 0; i < n; i++) {
			Array[i] = new T[m];
		}
		this->Number = 0;
	}
	virtual ~Matrix_Calculator() {}
	// Сложение
	template <typename T>
	void Addition(T **Array1, T **Array2, T **Array3, int N, int M) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				Array3[i][j] = Array1[i][j] + Array2[i][j];
			}
		}
	}
	// Вычитание
	template <typename T>
	void Substraction(T **Array1, T **Array2, T **Array3, int N, int M) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				Array3[i][j] = Array1[i][j] - Array2[i][j];
			}
		}																																																		
	}
	// Умножение матриц/векторов
	template <typename T>
	void Multiply(T** Array1, T** Array2, T** Array3, int N, int M, int P) {
		for (int i= 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				Array3[i][j] = 0;
				for (int k = 0; k < P; k++) {
					Array3[i][j] += Array1[i][k] * Array2[k][j];
				}
			}
		}
	}
	// Приравнивание первой матрицы второй
	template <typename T>
	void Equality(T** Array1, T** Array2, int N, int M) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				Array2[i][j] = Array1[i][j];
			}
		}
	}
	// Проверка равенства друх матриц
	template <typename T>
	bool CheckEquality(T **Array1, T **Array2, int N, int M) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (Array1[i][j] != Array2[i][j]) { return 0; }
			}
		}
		return 1;
	}
	// Умножение матрицы на число
	template <typename T>
	void MultiplyNumber(T** Array1, T** Array3, T Number1, int N, int M) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				Array3[i][j] = Array1[i][j] * Number1;
			}
		}
	}
};