#include <iostream>
#include <string>

using namespace std;

class User
{
public:
	string name;
	int age;
	

private:

};
void print(User text) {
	cout << " \n ************************** \n";
	cout << "Имя: " << text.name << endl;
	cout << "Возраст: " << text.age << endl;
};


int main() {
	setlocale(LC_ALL, "RUS");
	cout << "===============\n Привет ВГЛТУ! \n===============" << endl;
	cout << " \nЗаполните поля:" << endl;
	cout << "_________________________" << endl;
	User student;
	cout << "Имя: "; cin >> student.name;
	cout << "Возраст: "; cin >> student.age;
	print(student);
	
	return 0;
}