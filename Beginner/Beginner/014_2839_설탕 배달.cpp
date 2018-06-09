#include<stdio.h>
int main() {
	int N;	// 설탕 N킬로그램
	int cnt = -1;	// 봉지
	scanf("%d", &N);
	if (N % 5 == 0)
		cnt = N / 5;
	else {
		for (int i = N / 5; i >= 0; i--) {	// i=0일 때의 경우도 고려. (3으로 나누어 떨어짐!)
			if ((N - 5 * i) % 3 == 0) {
				cnt = i + (N - 5 * i) / 3;
				break;	// 상황을 만족시킬 경우 종료.
			}
		}
	}
	printf("%d", cnt);
	return 0;
}