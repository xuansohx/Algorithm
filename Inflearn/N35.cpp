#include <stdio.h>

int main(){
	// 문제35번) Special Sort - Google 기출
	// N개의 정수를 정렬 -> 음의 정수 뒤에 양의 정수 배치
	
	int a[101], n, temp, min, i, j;
	
	// 1. n개의 숫자를 배열 a에 담음
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	// 2. 버블정렬
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j]>0 && a[j+1]<0){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	// 3. 배열 a를 출력
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
	
	return 0;
}