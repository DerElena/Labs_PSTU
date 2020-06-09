#pragma once

#include "Person.h"
#include <vector>

struct TableElement			// структура элемент однонаправленного списка
{
	Person p;				// информационное поле
	TableElement* next;		// указатель на следующий элемент

	TableElement(Person& p)	// конструктор
	{
		this->p = p;
		this->next = 0;
	}
};

class HashTable
{
private:
	int size;
	TableElement** table;	// таблица указателей

	int countCollision = 0;	// количество коллизий
	float A = 0.37651;		// коэффициент для хэш-кода
public:
	HashTable(int n);
	~HashTable();

	int getHastCode(int k);	// получение хэш-кода

	void add(Person& p);	// добавление объекта
	void randForm(int n);	// случайное формирование
	void print();			// вывод
	void clear();			// очищение
	int getCountCollision() { return countCollision; }
	void findByKey(string p);

private:
	vector<string> fNames = { "Симонов","Алексеев","Силкин","Попов","Муравьев","Щеклин","Захаров","Зитев","Корнилов","Сонин","Тюрин","Смирнов" };
	vector<string> sNames = { "Алексей","Сергей","Иван","Николай","Антон","Дмитрий","Илья","Захар","Евгений","Иосиф","Степан","Игорь","Олег","Михаил","Александр" };
	vector<string> tNames = { "Сергеевич","Иванович","Алексеевич","Федорович","Петрович","Ильич","Андреевич","Павлович","Дмитриевич","Евгеньевич", "Михайлович","Юрьевич","Алексеевич","Степанович","Константинович" };
	vector<string> adresses = { "Москва", "Санкт-Петербург","Екатеринбург","Самара","Тюмень","Новосибирск","Саратов","Ростов-на-Дону","Казань","Пермь" };
};
