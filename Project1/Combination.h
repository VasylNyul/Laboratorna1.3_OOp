#include <iostream>
#pragma once
using namespace std;

class Combination
{
private:
	int  first, second;//���� - ����, �� ����. ����
public:
	int get_k() const { return first; };
	int get_n() const { return second; };//����� + ���������
	void set_k(unsigned int value);
	void set_n(unsigned int value);

	bool init(int x, int y);//�������� ������
	void display() const;
	void read();

	int f(int i);
	double combination();//�������� ������
};

