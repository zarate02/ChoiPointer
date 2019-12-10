#include <stdio.h>

//함수이름 -> 주소
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

	//포인터가 빛을 발하는 순간
	int aList[5] = { 40, 20, 50, 30, 10 };
	TestFunc2(aList);
}