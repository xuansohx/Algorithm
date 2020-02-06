#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	// 문제26) 마라톤
	/* 선수들의 평소 실력을 기반으로 최선의 등수를 계산하는 프로그램
	이때 입력받는 순서는 앞에서 달리고 있는 선수부터 제시한 것 -> 현재 등수 */
	
		int i, j, n, cnt=0;
		scanf("%d", &n); // n명의 선수의 실력을 입력 받음
		vector<int> a(n+1); // 입력받은 선수들의 실력은 배열 a에 담음
		for(i=1; i<=n; i++){
			scanf("%d", &a[i]);
		}
		printf("1 "); // 현재 맨 앞에 있는 사람은 최선의 등수가 1등이니까 '1'
		
		for(i=2; i<=n; i++){
			cnt=0; // cnt는 입력받은 값을 비교해서 최선의 등수를 계산함
			for(j=i-1; j>=1; j--){
				if(a[j]>=a[i]) cnt++;
			}
			printf("%d ", cnt+1);
		}
		return 0;	
}