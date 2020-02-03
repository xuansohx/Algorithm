#include <stdio.h>

int main(){
	// 문제23) 연속 부분 증가수열
	// n개의 수열 중 연속적으로 증가하는 부분의 길이
	
	int n, i, pre, now, cnt, max;
	scanf("%d", &n);
	scanf("%d", &pre); // 수열의 첫 번째 수 미리 읽어둠
	
	// cnt와 max 값 초기화
	cnt=1;
	max=1;
	
	// n개의 수열을 for문으로 읽음 (두 번째 값 부터)
	for(i=2; i<n; i++){
		scanf("%d", &now); // 이전의 수와 현재의 수 비교
		if(now>=pre){
			cnt++; // 지금 들어온 값이 같거나 크면 증가수열 -> cnt UP
			if(cnt>max) max=cnt;
		}
		else cnt=1; // 초기화 -> 감소하면 연속이 깨지므로 초기화 해야 됨
		pre=now; // now가 pre로 가고 다시 새로운 수를 now로 
	}
	
	printf("%d\n", max);
	return 0;
}