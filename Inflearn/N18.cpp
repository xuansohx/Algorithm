#include <stdio.h>

int main(){
	// 문제18) 층간소음
	/* 세대 측정치가 M값을 넘으면 세대호수와 경보음이 관리실 모니터로
	-> N초 동안 실시간 측정치를 입력하면 '최대 연속으로' 경보음이 울린 시간을 계산하는 프로그램 */
	
	int n, m, v, i, sec=0;
	int max=-2147000000; // 최대 연속으로 울린 경보음을 출력하기 위함
	scanf("%d %d", &n, &m); // n초 동안 측정하여 m값 넘으면 경보음
	for(i=1; i<=n; i++){ // 1초부터 n초까지 매 초마다 측정
		scanf("%d", &v); // 측정 값은 v(Value)로 지정
		if(v>m) sec++;
		else sec=0;
		if(sec>max) max=sec; // 연속으로 울린 수를 확인하기 위하여 max에 저장해둠
	}
	if(sec=0 || max<0) printf("%d", -1);
	/* 만약 경보가 울리지 않았으면 '-1'을 출력
	-> max 없이 sec=0만 확인하면 마지막에 경보가 울리지 않은 경우 오류가 발생하므로 둘 다 확인 */
	else printf("%d\n", max); 
	
	return 0;
}