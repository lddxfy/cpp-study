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
	// Base b;  //error! ���ܴ���������Ķ���
  // Base *b = new Base(); error!
	Base* bp = new Derived();// �������ָ������� -> �ɳ�����������������Ķ���
	bp->show();
	return 0;
}