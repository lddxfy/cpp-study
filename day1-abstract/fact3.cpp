#include <iostream>
using namespace std;

class Base {
    int x;

public:
    virtual void show() = 0;
    int getX() { return x; }
};
class Derived : public Base {
public:
    //    void show() { }
};
int main(void) {
    Derived
        d; // error!
    // ������û��ʵ�ִ��麯������ô������Ҳ���Ϊ�����࣬���ܴ���������Ķ���
    return 0;
}