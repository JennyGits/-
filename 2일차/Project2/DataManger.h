#pragma once
#include<fstream>
#include<string>
#define DataMgr  DataManger::instance()
using namespace std;

class DataManger
{
private:
	string name = "플레이어";
	int level = 37;
	int exp = 1000000;
public:
	DataManger() {

	}
	static DataManger* instance() {
		static DataManger inst;
		return &inst;
	}
	int getLevel() {
		return level;
	}
};

