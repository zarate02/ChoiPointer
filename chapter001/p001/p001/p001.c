#include <stdio.h>

int main2()
{
	int nData = 300;		//4����Ʈ : Ȯ�� F9 + F5 + F11
							//��Ʋ�ص�� : ���� ALU�� �б�����
							//ASLR(�����ּ�����) : ��ŷ����

	nData += 2;				//�����Ͱ� 302�� ��

	int *pnData = &nData;	//&pnData�� nData�� �ּҰ��� ��Ʋ�ص������ ��

	pnData += 2;			//int �ΰ���ŭ ������ũ��þ (4����Ʈ * 2)

	*pnData = 300;

	*(&nData) = 200;
	
	return 0;
}