#include <stdio.h>

int main(){
	// 문제15) 소수의 개수
	// 자연수 N이 입력되면 1부터 N까지의 소수의 개수를 출력
	
	int n, i, j, cnt=0;
	int flag;
	scanf("%d", &n);
	
	for(i=2; i<=n; i++){ // 1은 소수가 아니므로 2부터 확인
		flag=1;
		for(j=2; j*j<=i; j++){ // 제곱근을 사용하여 약수 확인
			if(i%j==0){ 
				/*if문이 참이 되면 약수가 존재하므로 소수가 아님
				따라서 break으로 반복문 빠져나옴 */
				flag=0; 
				// 약수가 존재하면 flag가 0이므로 아래 if문에서 count 되지 않음
				break;
			}
		}
		// 가장 내부 for문 빠져나올 때, flag 확인하여 count
		if(flag==1) cnt++;
	} // for문 종료
	printf("%d\n",cnt);
	return 0;
}