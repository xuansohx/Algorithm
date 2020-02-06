#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	// 문제27) N!의 표현법
	// 팩토리얼을 소수의 곱으로 표현하는 프로그램
	
	int n, i, j, tmp;
	scanf("%d", &n); // 팩토리얼의 소수를 구할 숫자 n을 입력 받음
	vector<int> ch(n+1); // 소수는 배열 ch을 이용하여 구할 예정
	for(i=2; i<=n; i++){
		tmp=i; // 몫이 떨어질 때까지 나눔 -> 우측에 정렬되는 수가 소수
		j=2;
		while(1){
			if(tmp%j==0){
				ch[j]++;
				tmp=tmp/j;
			}
			else j++;
			if(tmp==1) break;
		}
	}
	printf("%d! = ", n);

	for(j=2; j<=n; j++){ // 소수를 출력하기 위함
		if(ch[j]!=0) printf("%d ", ch[j]);
	}
	return 0;
	
}