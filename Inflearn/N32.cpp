#include <stdio.h>

int main(){
	// 문제32번) 선택정렬
	// N개의 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램
	
	int a[101], n, tmp, idx, i, j;
	scanf("%d", &n);
	
	// 1. n개의 숫자를 배열 a에 담음
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	// 2. min 값 찾아서 맨 앞으로 가져오기
	for(i=0; i<n-1; i++){
		idx=i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[idx]) idx=j;
		}
		tmp=a[i]; // tmp에 임시로 값을 저장해둔 후, a[i]와 a[idx] 교환 
		a[i]=a[idx];
		a[idx]=tmp;
	}
	
	// 3. 정렬이 완료된 배열 a의 값을 차례대로 출력
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
	
	return 0;
}