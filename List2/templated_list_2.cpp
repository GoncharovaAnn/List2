											// ������ ������� 

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template<typename T> // typename - �������� �����. ���������� ��� ������
class List
{
public:
	List(T value)// �����������
	{
		this->value = value; // � ������ �������� ���������� ������ �� ��������� � ��� ������ int. ����� ����� � ����� ��������� ��� ������ int
	}

private:
	T value; // ����� ������� ���������� ���� �
};
int main()
{
	int a = 123;

	List<int> c(a);// �������� ������� ������
	// ��� ��� ���������� � ����� ��� ������ int, typename T ���� ����� ����� ��� ������ int

	return 0;
}