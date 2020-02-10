#include <stdio.h>

int main(){
	// 문제33번) 3등의 성적은?
	// 오름차순으로 정렬하여 성적을 출력하는 프로그램
	
	int a[101], n, tmp, idx, i, j, cnt=0;
	scanf("%d", &n);
	
	// 1. 학생들의 성적을 차례대로 배열 a에 담음
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	// 2. 성적을 내림차순으로 정렬
	for(i=0; i<n-1; i++){
		idx=i;
		for(j=i+1; j<n; j++){
			if(a[j]>a[idx]) idx=j;
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
	}
	
	// 3. 3등의 성적 출력하기
	for(i=1; i<n; i++){
		if(a[i-1]!=a[i]) cnt++;
		if(cnt==2){
			printf("%d\n", a[i]);
			break;
		}
	}
	
	return 0;
	
}