#include "MatrixCalculatorForm.h"

using namespace MatrixCalculator;

//Загрузка из файла
Void MatrixCalculator::MatrixCalculatorForm::MatrixCalculatorForm_Load(System::Object^  sender, System::EventArgs^  e) {
	array<String^>^ lines = IO::File::ReadAllLines("Result.txt");
	int count = 0, j = 0;
	for each(String^ str in lines) {
		if (count == 0) {
			dataGridView1->RowCount = Convert::ToInt32(str->Split(L' ')[0]);
			dataGridView1->ColumnCount = Convert::ToInt32(str->Split(L' ')[1]);
		}
		else {
			for (int i = 0; i < dataGridView1->ColumnCount; i++) {
				dataGridView1->Rows[j]->Cells[i]->Value = str->Split(L' ')[i];
			}
			j++;
		}
		count++;
	}
	textBox2->Text = Convert::ToString(dataGridView1->ColumnCount);
	textBox1->Text = Convert::ToString(dataGridView1->RowCount);
}

//Вычитание
Void MatrixCalculator::MatrixCalculatorForm::SubstractionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	// Проверка, если чекбокс активен
	if (Check_Number() == true)
		return;
	if (Check_Matrix_Dimensions() == 1) { // Проверка, совпадают ли размерности матриц																																																																								
		using namespace std;
		int count = 0;
		// Проверка, введены ли недопустимые символы
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				Single test;
				Int32 test2;
				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		for (int i = 0; i < dataGridView2->RowCount; i++) {
			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
				Single test;
				Int32 test2;
				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		// Если нет дробных чисел
		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)) {
			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			array3.Substraction(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
			dataGridView3->RowCount = dataGridView1->RowCount;
			dataGridView3->ColumnCount = dataGridView1->ColumnCount;

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
				}
			}

			delete array1.Array;
			delete array2.Array;
			delete array3.Array;
		}
		// Если дробные числа есть
		else {
			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			array3.Substraction(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
			dataGridView3->RowCount = dataGridView1->RowCount;
			dataGridView3->ColumnCount = dataGridView1->ColumnCount;

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
				}
			}

			delete array1.Array;
			delete array2.Array;
			delete array3.Array;
		}
	}
}

//Сложение
Void MatrixCalculator::MatrixCalculatorForm::AdditionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	// Проверка, если чекбокс активен
	if (Check_Number() == true)
		return;
	if (Check_Matrix_Dimensions() == 1) { // Проверка, совпадают ли размерности матриц
		using namespace std;
		int count = 0;
		// Проверка, введены ли недопустимые символы
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				Single test;
				Int32 test2;
				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		for (int i = 0; i < dataGridView2->RowCount; i++) {
			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
				Single test;
				Int32 test2;
				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		// Если	дробных чисел нет
		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)) {
			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			array3.Addition(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
			dataGridView3->RowCount = dataGridView1->RowCount;
			dataGridView3->ColumnCount = dataGridView1->ColumnCount;

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
				}
			}

			delete array1.Array;
			delete array2.Array;
			delete array3.Array;
		}
		// Если дробные числа есть
		else {
			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			array3.Addition(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);
			dataGridView3->RowCount = dataGridView1->RowCount;
			dataGridView3->ColumnCount = dataGridView1->ColumnCount;

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(array3.Array[i][j]);
				}
			}

			delete array1.Array;
			delete array2.Array;
			delete array3.Array;
		}
	}
}

//Умножение
Void MatrixCalculator::MatrixCalculatorForm::MultiplyButton_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;
	int count1 = 0;
	int count2 = 0;
	Single test;
	Int32 test2;

	// Проверка, введены ли недопустимые символы
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
			if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
				MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else {
				if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
					count1++;
				}
			}
		}
	}
	if (checkBox1->Checked == false) {
		if (dataGridView1->ColumnCount != dataGridView2->RowCount) {
			MessageBox::Show("Ошибка. Матрицы разных размеров.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		for (int i = 0; i < dataGridView2->RowCount; i++) {
			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
						count2++;
					}
				}
			}
		}
	}
	else {
		if (Single::TryParse(Convert::ToString(textBox5->Text), test) == false) {
			MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	// Если дробных чисел нет
	if (count1 == (dataGridView1->ColumnCount * dataGridView1->RowCount)) {
		if (checkBox1->Checked == false) {
			if (count2 == (dataGridView2->ColumnCount * dataGridView2->RowCount)) {
				Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
				Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
				Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView2->ColumnCount);

				for (int i = 0; i < dataGridView1->RowCount; i++) {
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					}
				}

				for (int i = 0; i < dataGridView2->RowCount; i++) {
					for (int j = 0; j < dataGridView2->ColumnCount; j++) {
						array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
					}
				}

				array3.Multiply(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView2->ColumnCount, dataGridView1->ColumnCount);

				dataGridView3->RowCount = dataGridView1->RowCount;
				dataGridView3->ColumnCount = dataGridView2->ColumnCount;

				for (int i = 0; i < dataGridView3->RowCount; i++) {
					for (int j = 0; j < dataGridView3->ColumnCount; j++) {
						dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
					}
				}
				delete array1.Array;
				delete array2.Array;
				delete array3.Array;
			}
			else {
				Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
				Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
				Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView2->ColumnCount);

				for (int i = 0; i < dataGridView1->RowCount; i++) {
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
					}
				}

				for (int i = 0; i < dataGridView2->RowCount; i++) {
					for (int j = 0; j < dataGridView2->ColumnCount; j++) {
						array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
					}
				}

				array3.Multiply(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView2->ColumnCount, dataGridView1->ColumnCount);

				dataGridView3->RowCount = dataGridView1->RowCount;
				dataGridView3->ColumnCount = dataGridView2->ColumnCount;

				for (int i = 0; i < dataGridView3->RowCount; i++) {
					for (int j = 0; j < dataGridView3->ColumnCount; j++) {
						dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
					}
				}
				delete array1.Array;
				delete array2.Array;
				delete array3.Array;
			}
		}
		else {
			if (Int32::TryParse(Convert::ToString(textBox5->Text), test2) == true) {
				Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
				Matrix_Calculator <int> number(0);
				Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

				for (int i = 0; i < dataGridView1->RowCount; i++) {
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					}
				}

				number.Number = Convert::ToInt32(textBox5->Text);
				number.MultiplyNumber(array1.Array, array3.Array, number.Number, dataGridView1->RowCount, dataGridView1->ColumnCount);
				dataGridView3->RowCount = dataGridView1->RowCount;
				dataGridView3->ColumnCount = dataGridView1->ColumnCount;

				for (int i = 0; i < dataGridView3->RowCount; i++) {
					for (int j = 0; j < dataGridView3->ColumnCount; j++) {
						dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
					}
				}
				delete array1.Array;
				delete array3.Array;
			}
			else {
				Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
				Matrix_Calculator <float> number(0);
				Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

				for (int i = 0; i < dataGridView1->RowCount; i++) {
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
					}
				}

				number.Number = Convert::ToSingle(textBox5->Text);
				number.MultiplyNumber(array1.Array, array3.Array, number.Number, dataGridView1->RowCount, dataGridView1->ColumnCount);
				dataGridView3->RowCount = dataGridView1->RowCount;
				dataGridView3->ColumnCount = dataGridView1->ColumnCount;

				for (int i = 0; i < dataGridView3->RowCount; i++) {
					for (int j = 0; j < dataGridView3->ColumnCount; j++) {
						dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
					}
				}
				delete array1.Array;
				delete array3.Array;
			}
		}
	}
	// Если дробные числа есть
	if (count1 != (dataGridView1->ColumnCount * dataGridView1->RowCount)) {
		if (checkBox1->Checked == false) {
			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView2->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			array3.Multiply(array1.Array, array2.Array, array3.Array, dataGridView1->RowCount, dataGridView2->ColumnCount, dataGridView1->ColumnCount);

			dataGridView3->RowCount = dataGridView1->RowCount;
			dataGridView3->ColumnCount = dataGridView2->ColumnCount;

			for (int i = 0; i < dataGridView3->RowCount; i++) {
				for (int j = 0; j < dataGridView3->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
				}
			}

			delete array1.Array;
			delete array2.Array;
			delete array3.Array;
		}
		else {
			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <float> number(0);
			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			number.Number = Convert::ToSingle(textBox5->Text);
			number.MultiplyNumber(array1.Array, array3.Array, number.Number, dataGridView1->RowCount, dataGridView1->ColumnCount);
			dataGridView3->RowCount = dataGridView1->RowCount;
			dataGridView3->ColumnCount = dataGridView1->ColumnCount;

			for (int i = 0; i < dataGridView3->RowCount; i++) {
				for (int j = 0; j < dataGridView3->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = array3.Array[i][j];
				}
			}
			delete array1.Array;
			delete array3.Array;
		}
	}
}

//Приравнивание
Void MatrixCalculator::MatrixCalculatorForm::EquatingButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Check_Number() == true)
		return;
	if (Check_Matrix_Dimensions() == 1) { // Проверка, равны ли матрицы
		using namespace std;
		int count = 0;
		// Проверка, введены ли недопустимые символы
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				Single test;
				Int32 test2;
				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		for (int i = 0; i < dataGridView2->RowCount; i++) {
			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
				Single test;
				Int32 test2;
				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		// Если дробных чисел нет
		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)) {
			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			array1.Equality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					dataGridView2->Rows[i]->Cells[j]->Value = array1.Array[i][j];
				}
			}

			delete array1.Array;
			delete array2.Array;
		}
		// Если дробные числа есть
		else {
			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			array1.Equality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					dataGridView2->Rows[i]->Cells[j]->Value = array1.Array[i][j];
				}
			}

			delete array1.Array;
			delete array2.Array;
		}
	}
}

//Проверка равенства
Void MatrixCalculator::MatrixCalculatorForm::CheckEqualityButton_Click(System::Object^  sender, System::EventArgs^  e) {
	// Проверка, если чекбокс активен
	if (Check_Number() == true)
		return;
	// Если размерности матриц одинаковые
	if ((dataGridView1->RowCount == dataGridView2->RowCount) && (dataGridView1->ColumnCount == dataGridView2->ColumnCount)) {
		using namespace std;
		int count = 0;
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				Single test;
				Int32 test2;
				// Проверека, введены ли недопустимые символы
				if (Single::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		for (int i = 0; i < dataGridView2->RowCount; i++) {
			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
				Single test;
				Int32 test2;
				if (Single::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test) == false) {
					MessageBox::Show("Ошибка. Введены недопустимые символы.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					if (Int32::TryParse(Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value), test2) == true) {
						count++;
					}
				}
			}
		}
		// Если дробных чисел нет
		if (count == (dataGridView1->ColumnCount * dataGridView1->RowCount + dataGridView2->ColumnCount * dataGridView2->RowCount)) {
			Matrix_Calculator <int> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <int> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <int> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			if (array3.CheckEquality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount) == 1) {
				MessageBox::Show("Матрицы равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Матрицы не равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			delete array1.Array;
			delete array2.Array;
		}
		// Если дробные числа есть																																																																																																																																																												
		else {
			Matrix_Calculator <float> array1(dataGridView1->RowCount, dataGridView1->ColumnCount);
			Matrix_Calculator <float> array2(dataGridView2->RowCount, dataGridView2->ColumnCount);
			Matrix_Calculator <float> array3(dataGridView1->RowCount, dataGridView1->ColumnCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					array1.Array[i][j] = Convert::ToSingle(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					array2.Array[i][j] = Convert::ToSingle(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}

			if (array3.CheckEquality(array1.Array, array2.Array, dataGridView1->RowCount, dataGridView1->ColumnCount) == 1) {
				MessageBox::Show("Матрицы равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Матрицы не равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			delete array1.Array;
			delete array2.Array;
		}
	}
	else {
		MessageBox::Show("Матрицы не равны.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

// Изменение кол-ва строк 1 таблицы
Void MatrixCalculator::MatrixCalculatorForm::textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if ((Convert::ToInt32(textBox1->Text) > 0) && (Convert::ToInt32(textBox1->Text) < 26))
		dataGridView1->RowCount = Convert::ToInt32(textBox1->Text);
	if (Convert::ToInt32(textBox1->Text) == 25) {
		button1->Visible = false;
	}
	else {
		button1->Visible = true;
	}
	if (Convert::ToInt32(textBox1->Text) == 0) {
		button2->Visible = false;
	}
	else {
		button2->Visible = true;
	}
}

// Изменение кол-ва колонн 1 таблицы
Void MatrixCalculator::MatrixCalculatorForm::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((Convert::ToInt32(textBox2->Text) > 0) && (Convert::ToInt32(textBox2->Text) < 26))
		dataGridView1->ColumnCount = Convert::ToInt32(textBox2->Text);
	if (Convert::ToInt32(textBox2->Text) == 25) {
		button4->Visible = false;
	}
	else {
		button4->Visible = true;
	}
	if (Convert::ToInt32(textBox2->Text) == 0) {
		button3->Visible = false;
	}
	else {
		button3->Visible = true;
	}
}

// Изменение кол-ва строк 2 таблицы
Void MatrixCalculator::MatrixCalculatorForm::textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((Convert::ToInt32(textBox4->Text) > 0) && (Convert::ToInt32(textBox4->Text) < 26))
		dataGridView2->RowCount = Convert::ToInt32(textBox4->Text);
	if (Convert::ToInt32(textBox4->Text) == 25) {
		button8->Visible = false;
	}
	else {
		button8->Visible = true;
	}
	if (Convert::ToInt32(textBox4->Text) == 0) {
		button7->Visible = false;
	}
	else {
		button7->Visible = true;
	}
}

// Изменение кол-ва колонн 2 таблицы
Void MatrixCalculator::MatrixCalculatorForm::textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((Convert::ToInt32(textBox3->Text) > 0) && (Convert::ToInt32(textBox3->Text) < 26))
		dataGridView2->ColumnCount = Convert::ToInt32(textBox3->Text);
	if (Convert::ToInt32(textBox3->Text) == 25) {
		button6->Visible = false;
	}
	else {
		button6->Visible = true;
	}
	if (Convert::ToInt32(textBox3->Text) == 0) {
		button5->Visible = false;
	}
	else {
		button5->Visible = true;
	}
}

// Действия при изменении значения чекбокса
Void MatrixCalculator::MatrixCalculatorForm::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked == true) {
		textBox5->Visible = true;
		dataGridView2->Visible = false;
		textBox4->Visible = false;
		textBox3->Visible = false;
		label2->Visible = false;
		label4->Visible = false;
		button5->Visible = false;
		button6->Visible = false;
		button7->Visible = false;
		button8->Visible = false;
		button10->Visible = false;
	}
	else {
		textBox5->Visible = false;
		dataGridView2->Visible = true;
		textBox4->Visible = true;
		textBox3->Visible = true;
		label2->Visible = true;
		label4->Visible = true;
		button5->Visible = true;
		button6->Visible = true;
		button7->Visible = true;
		button8->Visible = true;
		button10->Visible = true;
	}
}

// Кнопка сохранения результата в файл
Void MatrixCalculator::MatrixCalculatorForm::button9_Click(System::Object^  sender, System::EventArgs^  e) {
	array<String^>^ lines = gcnew array<String^>(dataGridView3->RowCount + 1 - (dataGridView3->AllowUserToAddRows ? 1 : 0));
	array<String^>^ values = gcnew array<String^>(dataGridView3->ColumnCount);
	int row = dataGridView3->RowCount, column = dataGridView3->ColumnCount;

	lines[0] = Convert::ToString(row) + " " + Convert::ToString(column);
	//IO::File::WriteAllLines("Result.txt", lines, System::Text::Encoding::UTF8);

	for (int i = 1; i < lines->Length; i++) {
		for (int j = 0; j < dataGridView3->ColumnCount; j++)
			values[j] = (String^)Convert::ToString(dataGridView3->Rows[i - 1]->Cells[j]->Value);
		lines[i] = String::Join(L" ", values);
	}
	IO::File::WriteAllLines("Result.txt", lines, System::Text::Encoding::UTF8);
}
		 
// Кнопка загрузки матрицы из файла в первую матрицу
Void MatrixCalculator::MatrixCalculatorForm::button11_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	textBox1->Text = "0";
	textBox2->Text = "0";
	array<String^>^ lines = IO::File::ReadAllLines("Result.txt");
	int count = 0, j = 0;
	for each(String^ str in lines) {
		if (count == 0) {
			dataGridView1->RowCount = Convert::ToInt32(str->Split(L' ')[0]);
			dataGridView1->ColumnCount = Convert::ToInt32(str->Split(L' ')[1]);
		}
		else {
			for (int i = 0; i < dataGridView1->ColumnCount; i++) {
				dataGridView1->Rows[j]->Cells[i]->Value = str->Split(L' ')[i];
			}
			j++;
		}
		count++;
	}
	textBox2->Text = Convert::ToString(dataGridView1->ColumnCount);
	textBox1->Text = Convert::ToString(dataGridView1->RowCount);
}
		 
// Кнопка загрузки матрицы из файла во вторую таблицу
Void MatrixCalculator::MatrixCalculatorForm::button10_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView2->Rows->Clear();
	textBox3->Text = "0";
	textBox4->Text = "0";
	array<String^>^ lines = IO::File::ReadAllLines("Result.txt");
	int count = 0, j = 0;
	for each(String^ str in lines) {
		if (count == 0) {
			dataGridView2->RowCount = Convert::ToInt32(str->Split(L' ')[0]);
			dataGridView2->ColumnCount = Convert::ToInt32(str->Split(L' ')[1]);
		}
		else {
			for (int i = 0; i < dataGridView2->ColumnCount; i++) {
				dataGridView2->Rows[j]->Cells[i]->Value = str->Split(L' ')[i];
			}
			j++;
		}
		count++;
	}
	textBox3->Text = Convert::ToString(dataGridView1->ColumnCount);
	textBox4->Text = Convert::ToString(dataGridView1->RowCount);
}
Void MatrixCalculator::MatrixCalculatorForm::button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) + 1);
}
Void MatrixCalculator::MatrixCalculatorForm::button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = Convert::ToString(Convert::ToInt32(textBox1->Text) - 1);
}
Void MatrixCalculator::MatrixCalculatorForm::button4_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = Convert::ToString(Convert::ToInt32(textBox2->Text) + 1);
}
Void MatrixCalculator::MatrixCalculatorForm::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = Convert::ToString(Convert::ToInt32(textBox2->Text) - 1);
}
Void MatrixCalculator::MatrixCalculatorForm::button8_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = Convert::ToString(Convert::ToInt32(textBox4->Text) + 1);
}
Void MatrixCalculator::MatrixCalculatorForm::button7_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = Convert::ToString(Convert::ToInt32(textBox4->Text) - 1);
}
Void MatrixCalculator::MatrixCalculatorForm::button6_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->Text = Convert::ToString(Convert::ToInt32(textBox3->Text) + 1);
}
Void MatrixCalculator::MatrixCalculatorForm::button5_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->Text = Convert::ToString(Convert::ToInt32(textBox3->Text) - 1);
}