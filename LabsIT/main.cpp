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
	cout << "���: " << text.name <<endl;
	cout << "�������: " << text.age << "���" << endl;
	cout << "����: " << text.height << "��" << endl;
	cout << "���: " << text.weight << "��" << endl;
};


int main() {
	system("chcp 1251 >> null"); // ��� ����������� ������ 
	setlocale(LC_ALL, "RUS"); // ��� �������� 
	cout << "===============\n ������ �����! \n===============" << endl;
	cout << " \n��������� ����:" << endl;
	cout << "_________________________" << endl;

	Human user;
	cout << "���: "; cin >> user.name;
	cout << "�������: "; cin >> user.age;
	cout << "����: "; cin >> user.height;

	
	cout << "���: "; cin >> user.;        
	print(user);
	
	return 0;
}