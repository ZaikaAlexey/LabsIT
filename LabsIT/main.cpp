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
	cout << "���: " << text.name <<endl;
	cout << "�������: " << text.age << "���" << endl;
	cout << "����:" << text.height << "��." << endl;
};


int main() {
	system("chcp 1251 >> null"); // ��� ����������� ������ 
	setlocale(LC_ALL, "RUS"); // ��� �������� 
	cout << "===============\n ������ �����! \n===============" << endl;
	cout << " \n��������� ����:" << endl;
	cout << "_________________________" << endl;
	User student;
	cout << "���: "; cin >> student.name; 
	cout << "�������: "; cin >> student.age; 
	cout << "����: "; cin >> student.height;
	print(student);
	
	return 0;
}