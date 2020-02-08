#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	// 문제28) N!에서 0의 개수
	/* 자연수 N이 입력되면 N!의 값에서 
	일의 자리부터 연속적으로 '0'이 몇 개 있는지 구하는 프로그램 */
	
	// 문제해결 Tip! 10이 몇 번 곱해지는지 -> 2와 5를 소인수로 가지는지 확인
	
	int n, i, j, tmp, two=0, five=0;
	scanf("%d", &n); // 자연수 n이 입력 
	for(i=2; i<=n; i++){
		tmp=i; 
		j=2;
		while(1){
			if(tmp%j==0){ // 인수인지 아닌지 확인
				if(j==2) two++;
				else if(j==5) five++;
				tmp=tmp/j;
			}
			else j++; // 인수가 아니면 다음 수 확인
			if(tmp==1) break;
		} // 여기까지 소인수분해
	}
	
	if(two<five) printf("%d\n", two);
	else printf("%d\n", five);
	
	return 0;
}