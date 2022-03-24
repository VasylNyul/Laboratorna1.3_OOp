#include <iostream>
#pragma once
using namespace std;

class Combination
{
private:
	int  first, second;//поля - змінні, що опис. обєкт
public:
	int get_k() const { return first; };
	int get_n() const { return second; };//метод + реалізація
	void set_k(unsigned int value);
	void set_n(unsigned int value);

	bool init(int x, int y);//прототип методу
	void display() const;
	void read();

	int f(int i);
	double combination();//прототип методу
};

