// 1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;
class CTestCopy
{
	int *x;
public:
	CTestCopy();
	CTestCopy(int a);
	CTestCopy(CTestCopy & om);
	void setX(int a);
	void disPlay();
	~CTestCopy();
};
CTestCopy::CTestCopy()
{
	x = new int;
	*x = 0;
	cout << "Ĭ�Ϲ��캯�� *x=" << *x << "          x������ֵ=" << x << "    x�����ĵ�ַ=" << &x << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "�������� *x=" << *x << "          x������ֵ=" << x << "    x�����ĵ�ַ=" << &x << endl;
}
	delete x;
}
CTestCopy::CTestCopy(int a)
{
	x = a;
	y = b;
	
	x = new int;
	*x = a;
	cout << "���캯��*x=" << *x << "         x������ֵ=" << x << "    x�����ĵ�ַ=" << &x << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	
	x = om.x;
	cout << "���ƹ��캯�� *x=" << *x << "          x������ֵ=" << x << "    x�����ĵ�ַ=" << &x << endl;
}


void CTestCopy::setX(int a)
{
	
	*x = a;

}
void CTestCopy::disPlay()
{
	cout << "��ʾ���� *x=" << *x << "          x������ֵ=" << x << "    x�����ĵ�ַ=" << &x << endl;
	
}
CTestCopy myTest()
{
	
	CTestCopy om(600);
	om.disPlay();
	return om;
}


int main()
{
	
	ot = myTest();
	CTestCopy ot(100);
	ot.disPlay();
	CTestCopy obj(ot);
	return 0;
}

