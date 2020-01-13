#include <stdio.h>

int main(){
	// 문제11) 숫자의 총 개수(small)
	/* 자연수 N이 입력되면 1~N까지 각 숫자는 몇 개인지?
	-> 각 자연수의 자릿수를 분리하여 counting
	이때 앞자리가 0인 경우, 이 '0'은 counting 되지 않도록 하기 */
	
	int n, i, tmp, cnt=0;
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		// 1부터 n까지의 수를 tmp에 저장하여 자릿수 분리
		tmp=i;
		while(tmp>0){
			tmp=tmp/10;
			cnt++; 
		}
	}
	printf("%d",cnt);
	return 0;
}