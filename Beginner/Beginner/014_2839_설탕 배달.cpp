#include<stdio.h>
int main() {
	int N;	// ���� Nų�α׷�
	int cnt = -1;	// ����
	scanf("%d", &N);
	if (N % 5 == 0)
		cnt = N / 5;
	else {
		for (int i = N / 5; i >= 0; i--) {	// i=0�� ���� ��쵵 ���. (3���� ������ ������!)
			if ((N - 5 * i) % 3 == 0) {
				cnt = i + (N - 5 * i) / 3;
				break;	// ��Ȳ�� ������ų ��� ����.
			}
		}
	}
	printf("%d", cnt);
	return 0;
}