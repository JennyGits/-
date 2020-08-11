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
		cout << "피자 조각 수를 입력";
		cin >> pizza_slices;
		cout << "사람 수를 입력";
		cin >> persons;

		slicesPerPerson = DividePizza(pizza_slices, persons);
		cout << "한 사람당 피자는 " << slicesPerPerson << "입니다" << endl;
	}
	catch (int e) {
		cout << "사람이" << e << "명 입니다" << endl;
	}
	
	return 0;

}