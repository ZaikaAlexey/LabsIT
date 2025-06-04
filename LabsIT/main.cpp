#include <iostream>
#include <clocale>
#include <cstdlib>
#include <string>

#include <windows.h>

using namespace std;

class User
{
public:
	string name;
	int age;
	int height;

private:

};
void print(User text) {
	cout << " \n ************************** \n";
	cout << "Имя: " << text.name <<endl;
	cout << "Возраст: " << text.age << "лет" << endl;
	cout << "Рост:" << text.height << "см." << endl;
};


int main() {
	system("chcp 1251 >> null"); // для русификации вывода 
	setlocale(LC_ALL, "RUS"); // для кирилицы 
	cout << "===============\n Привет ВГЛТУ! \n===============" << endl;
	cout << " \nЗаполните поля:" << endl;
	cout << "_________________________" << endl;
	User student;
	cout << "Имя: "; cin >> student.name; 
	cout << "Возраст: "; cin >> student.age; 
	cout << "Рост: "; cin >> student.height;
	print(student);
	
	return 0;
}