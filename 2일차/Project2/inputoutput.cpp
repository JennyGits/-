#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream ftxt;
	string s;
	ftxt.open("readline.txt");
	
	ftxt >> s;
	cout << s;
	//ftxt.get(); 주로 꺽새를 이용해서 가져옴(이건 그냥 알아두기!)


	ftxt.close();

	ofstream otxt;
	string str;

	otxt.open("tmp.txt");
	cin >> str;
	otxt << str;
	otxt.close();
}