#include <stdio.h>
int cnt[50001]; // 0부터 50,000까지 담기 위한 배열
int main(){
	int n, i, j;
	scanf("%d", &n); // 주소연산자 '&' 깜빡하지 않기
	for(i=1; i<=n; i++){
		// 1. 1부터 입력된 자연수 n까지의 자연수 확인
		for(j=i; j<=n; j=j+i){
			// 2. 전체를 확인하는 것이 아님
			/* 예를 들어, i=2는 2의 배수만이 약수로 가짐 
			-> j++이 아닌 j+i를 하여 i의 배수만 확인하여 시간절감 */
			cnt[j]++;
		}
	}
	for(i=1; i<=n; i++){
		printf("%d ", cnt[i]);
	}
	return 0;
}