#include <iostream>
using namespace std;
#pragma once
	template<typename T> // typename - ключевое слово. Обобщенный тип данных
class List
{
public:
	List(T value)// конструктор
	{
		this->value = value;
	}
	void DataSize()
	{
		cout << sizeof(value) << "\n";
	}

private:
	T value; // Можно создать переменную типа Т
};

int main()
{
	setlocale(LC_ALL, "");

	int a = 123;
	
	List<int> c(a);// Создание объекта класса
	// так как переменная а имеет тип данных int, typename T тоже будет иметь тип данных int
	c.DataSize();


	return 0;
}

