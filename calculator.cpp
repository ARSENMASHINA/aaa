// calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	cout << MySum(10, 3) << endl;
	cout << MySub(10, 3) << endl;
	cout << MyMul(10, 3) << endl;
	cout << MyPow(10.5, 3.7) << endl;
	system("pause");
	return 0;
}