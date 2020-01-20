#include <stdio.h>

int main(){
	// 문제21) 카드게임
	/* 이기면 3점, 지는 사람에겐 0점, 비기면 모두에게 1점
	A와 B 카드를 입력한 후, 결과에서 총점과 이긴 사람을 출력 */
	
	int i, a[10], b[10];
	int ascore=0, bscore=0, winner=0;
	
	// 1. A 카드의 값을 a 배열에 담음
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	
	// 2. B 카드의 값을 b 배열에 담음
	for(i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	
	// 3. A와 B의 카드를 비교하여 결과 출력
	/* 점수가 동점이면 승리자를 선별할 수 없으므로 
	A가 이기면 winner에 1을, B가 이기면 winner에 2를 저장 */
	for(i=0; i<10; i++){
		if(a[i]==b[i]){
			ascore+=1;
			bscore+=1;
		} 
		else if(a[i]>b[i]){
			ascore+=3;
			winner=1; // A가 승리
		}
		else if(a[i]<b[i]){
			bscore+=3;
			winner=2; // B가 승리
		} 
	}
	
	// A와 B의 점수 출력
	printf("%d %d\n", ascore, bscore);
	/* 승자를 출력
	만일 A와 B가 동점이면 마지막 라운드 득점자가 승리 */
	if(ascore>bscore) printf("A\n");
	else if(ascore<bscore) printf("B\n");
	else if(ascore==bscore){
		if(winner==1) printf("A\n");
		else if(winner==2) printf("B\n");
		else printf("D\n"); // 무승부
	}
	
	return 0;
	
}