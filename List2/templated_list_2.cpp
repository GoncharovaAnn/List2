											// ПРИМЕР ШАБЛОНА 

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template<typename T> // typename - ключевое слово. Обобщенный тип данных
class List
{
public:
	List(T value)// конструктор
	{
		this->value = value; // в момент создания экземпляра класса мы присвоили Т тип данных int. Далее везде Т будет принимать тип данных int
	}

private:
	T value; // Можно создать переменную типа Т
};
int main()
{
	int a = 123;

	List<int> c(a);// Создание объекта класса
	// так как переменная а имеет тип данных int, typename T тоже будет иметь тип данных int

	return 0;
}