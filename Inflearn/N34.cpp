#include <stdio.h>

int main(){
	// 문제34번) 버블정렬
	// N개의 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램
	
	int a[101], n, i, j, temp;
	scanf("%d", &n); // n개의 숫자를 입력받을 예정
	
	// 1. 배열 a에 입력받는 숫자를 담음
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	// 2. 버블정렬
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){ 
			if(a[j]>a[j+1]){
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