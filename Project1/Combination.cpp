#include "Combination.h"

void Combination::set_k(unsigned int value)
{
	first = value;
}

void Combination::set_n(unsigned int value)
{
	second = value;
}

bool Combination::init(int x, int y)
{
	if (x > 0 && y > 0 && x < y)
	{
		first = x;
		second = y;
		return true;
	}
	else
		return false;
};

void Combination::display() const
{
	cout << endl;
	cout << "k = " << first << endl;
	cout << "n = " << second << endl;
};

void Combination::read()
{
	int x, y;
	do {
		cout << "k = "; cin >> x;
		cout << "n = "; cin >> y;
	} while (!init(x, y));

};

int Combination::f(int i)
{
	if (i == 0)
	{
		return 1;
	}
	  else 
		return i * f(i - 1);
}

double Combination::combination()
{
	return f(second)/( f(second - first) * f(first) );
};