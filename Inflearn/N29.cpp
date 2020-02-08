#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	// 문제29) 3의 개수는? - Google 기출 변형
	/* 자연수 N이 입력되면, 1부터 N까지의 자연수를 종이에 적음
	이때 각 숫자 중 3의 개수가 몇 개인지 구하는 프로그램 */
	
	int n, tmp, i, cnt=0, digit;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		tmp=i;
		while(tmp>0){ 
			// 이 while문에서 자릿수 분리하여 3이 있는지 없는지 확인
			digit=tmp%10;
			if(digit==3) cnt++;
			tmp=tmp/10;
		}
	}
	printf("%d\n", cnt);
	return 0;
}