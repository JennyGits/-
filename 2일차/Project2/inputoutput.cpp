#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream ftxt;
	string s;
	ftxt.open("readline.txt");
	
	ftxt >> s;
	cout << s;
	//ftxt.get(); �ַ� ������ �̿��ؼ� ������(�̰� �׳� �˾Ƶα�!)


	ftxt.close();

	ofstream otxt;
	string str;

	otxt.open("tmp.txt");
	cin >> str;
	otxt << str;
	otxt.close();
}