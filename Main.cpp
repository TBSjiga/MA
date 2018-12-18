#include "MatrixCalculatorForm.h"

using namespace MatrixCalculator;

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MatrixCalculatorForm());
	return 0;
}