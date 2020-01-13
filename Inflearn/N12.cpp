#include <stdio.h>

int main(){
	// 문제12) 숫자의 총 개수(large)
	// 문제11과 같은 문제 -> 단, 숫자가 커진다면? (제한시간 1초)
	
	int n, sum=0, c=1, digit=9, result=0;
	scanf("%d", &n);
	/* 숫자n을 입력 받으면, 자연수 1~n이 총 몇 개의 수로 이루어지는지 구함
	-> for문으로 하나씩 확인하면, 큰 수의 경우 시간이 너무 오래걸림 */
	/* 자릿수를 기준으로 구간을 나누어 개수를 구함 */
	
	while(sum+digit<n){
		/* digit가 이번 문제의 keypoint!
		c=1 -> d=9 / c=2 -> d=99 .. 숫자의 개수
		따라서, c와 d를 곱하면 총 몇 개의 수로 이루어졌는지 알 수 있음 */
		result=result+(c*digit);
		sum=sum+digit; // sum은 d의 합! 어떤 숫자인지 알 수 있음
		// 다음 자릿수로 넘어가기 위함
		c++; // c는 자릿수 (한 자리 -> 두 자리)
		digit=digit*10;	
	}
	
	result=result+((n-sum)*c);
	printf("%d\n", result);
	return 0;
}