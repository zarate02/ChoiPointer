#include <stdio.h>

//�Լ��̸� -> �ּ�
// void (*)(int)
void TestFunc(int nParam)
{
	printf("TestFunc() : %d\n", nParam);
}

void TestFunc2(int * nParam){

}

int main(void)
{
	TestFunc(10);	//((void(*)(int))0x003D1490)(10);

	//�����Ͱ� ���� ���ϴ� ����
	int aList[5] = { 40, 20, 50, 30, 10 };
	TestFunc2(aList);
}