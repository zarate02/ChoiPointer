#include <stdio.h>

int main2()
{
	int nData = 300;		//4바이트 : 확인 F9 + F5 + F11
							//리틀앤디안 : 인텔 ALU가 읽기편함
							//ASLR(랜덤주소지정) : 해킹방지

	nData += 2;				//데이터가 302로 됨

	int *pnData = &nData;	//&pnData에 nData의 주소값이 리틀앤디안으로 들어감

	pnData += 2;			//int 두개만큼 데이터크기늘어남 (4바이트 * 2)

	*pnData = 300;

	*(&nData) = 200;
	
	return 0;
}