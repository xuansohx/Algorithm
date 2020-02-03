#include <stdio.h>
#include <vector>
/* #include <vector> -> 동적메모리할당?
메모리를 크게 정의해버리면 낭비이기 때문! (라이브러리 공부 더 하기) */

int main(){
	// 문제22) 온도의 최대값
	/* 연속적인 며칠 동안의 온도의 합이 가장 큰 값
	N은 전체 며칠인지 날짜의 수, K는 연속적인 날짜의 수 */
	
	/* 이중 for문 사용하면 효율이 떨어짐 
	한 번만 사용하는 방법 알아두기 */
	
	int n, k, i, sum=0, max;
	scanf("%d %d", &n, &k); // n이 배열
	std::vector<int> a(n); // 1차원 배열 동적으로 할당(n 크기 만큼의 배열)
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<k; i++){ // 연속된 날짜 k
		sum+=a[i];
	}
	max=sum;
	
	for(i=k; i<n; i++){
		sum=sum+(a[i]-a[i-k]); // 새로운 다음 값 더하고 이전 값 뺌
		if(sum>max) max=sum;
	}
	printf("%d\n", max);
	return 0;
}