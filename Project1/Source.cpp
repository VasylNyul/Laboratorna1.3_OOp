#include <iostream>
#include "Combination.h"//приєднали клас
using namespace std;

Combination makeCombination(int x, int y)
{
    Combination c;
    if (!c.init(x, y))
        cout << "wrong argument" << endl;
    return c;
}

int main()
{
    Combination c; 

    int x, y;
    //cout << "Combination" << endl;
    //c.read();
    //c.display();
    //cout << "C(n,k)=" << c.combination() << endl << endl;
    
    cout << "Input value:" << endl << endl; 
    cout << " k="; cin >> x;
    cout << " n="; cin >> y;

    c.init(x, y);

    c = makeCombination(x, y);
    c.display();
    cout << "C(n,k)=" << c.combination() << endl;

    cin.get();

}
