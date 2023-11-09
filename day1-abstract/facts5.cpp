#include <iostream>
using namespace std;

//构造函数不能是虚函数，而析构函数可以是虚析构函数

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