#include <iostream>
using namespace std;

/**
 * @brief ���������ٰ���һ�����麯��
 */
class Test {
	int x;

public:
	virtual void show() = 0;
	int getX() { return x; }
};

int main(void) {
	Test t; // error! ���ܴ���������Ķ���
	return 0;
}