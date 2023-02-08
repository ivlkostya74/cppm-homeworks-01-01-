// cppm-homeworks01_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>
#include <fstream>


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	std::cout << " открытие файла\n";
	std::ifstream fin("TextFile1.txt"); // открытие файла
	if (!fin.is_open()) {
		std::cout << "неудачное открытие файла\n";
		return 0;
	}

	int size;
	fin >> size;

	int* arr = new int[size];
	int* arr1 = new int[size];
	for (int i = 0; i < size; i++) {
		fin >> arr[i];
		//   arr[i] = nambe;
		  //  std::cout <<"i  " << i<<"= "<<arr[i]<<" ";
	}
	std::cout << "\n ";

	for (int i = 0; i < size - 1; i++) {
		if (i == 0) arr1[i] = arr[size - 1];
		arr1[i] = arr[i + 1];
		//    std::cout << "i  " << i << "= " << arr1[i] << " ";

	}
	arr1[size - 1] = arr[0];
	delete[] arr;
	int size1;
	fin >> size1;

	int* arr3 = new int[size1];
	int* arr2 = new int[size1];
	for (int i = 0; i < size1; i++) {
		fin >> arr3[i];
		//   arr3[i] = nambe;
		
	//std::cout << "i  " << i << "= " << arr3[i] << " ";
	}
	//  std::cout << "\n ";

	for (int i = 0; i <= size1 - 1; i++) {
		if (i == 0) {
			arr2[i] = arr3[size1 - 1]; 
			continue;
		}
		arr2[i] = arr3[i- 1];
		//std::cout << "i  " << i << "= " << arr2[i] << " ";

	}
	//arr2[size1 - 1] = arr3[0];
	delete[] arr3;
	int a = 0;


	std::cout << " запись файла\n";

	std::ofstream fout("out.txt");
	if (!fout.is_open()) {
		std::cout << "Не получилось открыть фaйл out.txt" << std::endl;
		delete[] arr1;
		delete[] arr2;
		return 1;
	}
	fout << size1 << "\n";
	for (int i = 0; i < size1; i++) {
		fout << arr2[i] << " ";
	}
	fout << std::endl;
	fout << size << "\n";
	for (int i = 0; i < size; i++) {
		fout << arr1[i] << " ";
	}
	fout << std::endl;

	delete[] arr1;
	delete[] arr2;

	fout.close();



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
