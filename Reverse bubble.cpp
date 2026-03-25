#include <iostream>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "RU");

	const int size{ 10 };
	int integerArray[size]{ 1456, 2, 3, 44, 5, 63, 7, 82, 9, 10 };

	std::cout << "Массив до сортировки: ";
	for (int element{}; element < size; ++element) {
		std::cout << integerArray[element] << " ";
	}
	std::cout << std::endl;

	bool swapped{};
	for (int i{}; i < size - 1; ++i) {
		swapped = false;
		for (int j{ size - 1 }; j > i; --j) {
			if (integerArray[j] < integerArray[j - 1]) {
				int temporary{ integerArray[j] };
				integerArray[j] = integerArray[j - 1];
				integerArray[j - 1] = temporary;

				swapped = true;
			}
		}
		if (!swapped) { break; }
	}

	std::cout << "Массив после сортировки: ";
	for (int element{}; element < size; ++element) {
		std::cout << integerArray[element] << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}