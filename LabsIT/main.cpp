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
	cout << "���: " << text.name << endl;
	cout << "�������: " << text.age << endl;
};


int main() {
	setlocale(LC_ALL, "RUS");
	cout << "===============\n ������ �����! \n===============" << endl;
	cout << " \n��������� ����:" << endl;
	cout << "_________________________" << endl;
	User student;
	cout << "���: "; cin >> student.name;
	cout << "�������: "; cin >> student.age;
	print(student);
	
	return 0;
}