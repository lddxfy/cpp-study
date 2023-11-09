#pragma once
//抽象类（含有纯虚函数的类）
/* C++中的纯虚函数(或抽象函数)是我们没有实现的虚函数！我们只需声明它!通过声明中赋值0来声明纯虚函数！
* 纯虚函数：没有函数体的虚函数
*/
class AbstractBase {
public:
	//纯虚函数
	virtual void show() = 0;
};