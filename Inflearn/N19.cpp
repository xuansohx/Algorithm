#include <stdio.h>

int main(){
	// 문제19) 분노 유발자
	// 앉은 키가 큰 사람 뒤에 앉은 키가 작은 사람이 몇 명인지 구하는 프로그램
	
	int n, i, cnt=0, max; 
	int height[101]; 
	
	scanf("%d", &n); // 1. 학생 수를 입력 받음
	
	// 2. 학생들의 앉은 키 정보를 배열 height에 담음
	for(i=1; i<=n; i++){ // n명까지 있으므로 height[n]까지 있음
		scanf("%d", &height[i]);
	}
	max=height[n]; // max는 height[n]로 초기화 -> 뒤에서 부터 비교 할 예정이므로
	
	// 3. height에서 max 값이 몇 번 갱신되는지 count 하여 분노 유발자 찾기
	for(i=n-1; i>0; i--){
		if(height[i] > max){
			max=height[i];
			cnt++;
		}
	}	
	printf("%d", cnt);
	
	return 0;	
}