#include <iostream>
using namespace std;

//���캯���������麯������������������������������

class Base {
public:
	Base() {
		cout << "ctor:Base" << endl;
	}
	virtual ~Base() {
		cout << "dtor:Base" << endl;
	}
};
class Derived :public Base {
public:
	Derived() { cout << "ctor: Derived" << endl; }
	~Derived() { cout << "dtor : Derived" << endl; }
};
int main() {
	Base* var = new Derived();
	delete var;
	return 0;
}