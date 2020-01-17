#include <stdio.h>

int main(){
	// 문제17) 선생님 퀴즈
	// 학생이 받은 카드의 수와 입력한 답을 확인하는 채점프로그램
	
	int n, i, j, card, answer, sum;
	// card는 학생이 받은 카드의 숫자, answer은 학생의 답, sum은 정답 
	scanf("%d",&n); // n명의 학생
	for(i=1; i<=n; i++){
		// 1. 1번, 2번, 3번 학생의 카드와 정답을 확인하는 for문
		scanf("%d %d", &card, &answer);
		sum=0;
		// 2. 입력된 카드의 숫자 n을 기반으로 정답 sum을 구함
		for(j=1; j<=card; j++){
			sum+=j;
		}
		
		// 3. 학생이 입력한 answer와 정답 sum을 비교하여 결과를 출력
		if(answer==sum) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}