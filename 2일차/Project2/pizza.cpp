#include<iostream>
using namespace std;

int DividePizza(int pizzaSlice, int person) {
	if (person == 0)
		throw person;
	return pizzaSlice / person;
}

int main() {
	int pizza_slices = 0;
	int persons = 0;
	int slicesPerPerson = 0;

	

	try {
		cout << "���� ���� ���� �Է�";
		cin >> pizza_slices;
		cout << "��� ���� �Է�";
		cin >> persons;

		slicesPerPerson = DividePizza(pizza_slices, persons);
		cout << "�� ����� ���ڴ� " << slicesPerPerson << "�Դϴ�" << endl;
	}
	catch (int e) {
		cout << "�����" << e << "�� �Դϴ�" << endl;
	}
	
	return 0;

}