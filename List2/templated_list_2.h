#include <iostream>
using namespace std;
#pragma once
	template<typename T> // typename - �������� �����. ���������� ��� ������
class List
{
public:
	List(T value)// �����������
	{
		this->value = value;
	}
	void DataSize()
	{
		cout << sizeof(value) << "\n";
	}

private:
	T value; // ����� ������� ���������� ���� �
};

int main()
{
	setlocale(LC_ALL, "");

	int a = 123;
	
	List<int> c(a);// �������� ������� ������
	// ��� ��� ���������� � ����� ��� ������ int, typename T ���� ����� ����� ��� ������ int
	c.DataSize();


	return 0;
}

