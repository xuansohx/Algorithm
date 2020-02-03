#include <stdio.h>

int main(){
	// 문제25) 석차 구하기
	/* 각 학생의 점수가 입력한 순서대로 석차가 출력되는 프로그램
	같은 점수가 존재하면 높은 석차로 동일 처리하며, 1등이 3명이면 다음은 4등 */
	
	int n, i, j, score[200], grade[200];
	scanf("%d", &n); // n명의 학생
	
	// 1. 학생들의 점수를 저장
	for(i=1; i<=n; i++){
		scanf("%d", &score[i]);
		grade[i]=1; 
		/* 각 학생의 점수를 score 배열에 저장하는데, 
		이때 grade의 같은 인덱스에도 동시 저장 */
	}
	
	// 2. 점수를 비교하여 나보다 작은 값이 있으면 등수는 ++
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(score[j]>score[i]) grade[i]++;
		}
	}
	
	// 3. 점수 순서대로 등수를 출력
	for(i=1; i<=n; i++){
		printf("%d", grade[i]);
	}
	
	return 0;

}