#include <iostream>
#include "Functions.h"
#include "Structures.hpp"
#include "Data.hpp"



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Файл с функциями
	std::cout << sum(5, 4) << std::endl;
	prime_range(7, 20);

	const int size = 3;
	int arr[size]{ 10, 20, 30 };
	print_arr(arr, size);



	// Файл со структурами
	Person p1{
		"Lora Satueva",
		{ 29, 7, 2001 },
		'F'
	};
	print_person(p1);


	// Файл с переменными 
	_A = 7;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	print_arr(_ARR, _SIZE); 

	prime_range(1, 10);



	// Области применения многовайловых проектов:
	// 1. Сокращение объёма кода в главном файле;
	// 2. Разделение обязанностей разработчиков;
	// 3. Создание своих библилтек;
	// 4. Ускорение сборки.







	return 0;
}