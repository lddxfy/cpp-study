#include <iostream>
using namespace std;

class Base {
	int x;
public:
	virtual void show() = 0;
	int getx() {
		return x;
	}

};

class Derived :public Base {
public:
	void show() {
		cout << "in d" << endl;
	}
	Derived(){}
};
int main(void) {
	// Base b;  //error! 不能创建抽象类的对象
  // Base *b = new Base(); error!
	Base* bp = new Derived();// 抽象类的指针和引用 -> 由抽象类派生出来的类的对象
	bp->show();
	return 0;
}