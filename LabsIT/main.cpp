#include <iostream>
#include <clocale>
#include <cstdlib>
#include <string>

#include <windows.h>

using namespace std;

class Human
{
public:
	string name;
	int age;
	int height;
	int weight;
private:

};
void print(Human text) {
	cout << " \n ************************** \n";
	cout << "Имя: " << text.name <<endl;
	cout << "Возраст: " << text.age << "лет" << endl;
	cout << "Рост: " << text.height << "см" << endl;
	cout << "Вес: " << text.weight << "кг" << endl;
};


int main() {
	system("chcp 1251 >> null"); // для русификации вывода 
	setlocale(LC_ALL, "RUS"); // для кирилицы 
	cout << "===============\n Привет ВГЛТУ! \n===============" << endl;
	cout << " \nЗаполните поля:" << endl;
	cout << "_________________________" << endl;

	Human user;
	cout << "Имя: "; cin >> user.name;
	cout << "Возраст: "; cin >> user.age;
	cout << "Рост: "; cin >> user.height;

	
	cout << "Вес: "; cin >> user.;        
	print(user);
	
	return 0;
}