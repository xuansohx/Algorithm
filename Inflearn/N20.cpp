#include <stdio.h>

int main(){
	// 문제20) 가위바위보
	/* 두 사람의 가위바위보 결과를 출력하는 프로그램
	-> A가 이기면 A, B가 이기면 B, 비길 경우엔 D를 출력
	(1:가위, 2:바위, 3:보) */
	
	int n, a[101], b[101], i;
	// 1. N번의 게임을 하겠다고 정함
	scanf("%d", &n); 
	
	// 2. A의 가위바위보 입력
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]); 
	}
	
	// 3. B의 가위바위보 입력
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]); 
	}
	
	// 4. A와 B의 가위바위보를 비교하여 결과를 출력
	for(i=1; i<=n; i++){
		if(a[i]==b[i]) printf("D\n");
		else if(a[i]==1 && b[i]==3) printf("A\n");
		else if(a[i]==2 && b[i]==1) printf("A\n");
		else if(a[i]==3 && b[i]==2) printf("A\n");
		else printf("B\n");	
	}
	
	return 0;
}