#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	// 문제36번) 삽입정렬
	// N개의 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램
	
	int a[100], n, temp, i, j;
	
	// 1. n개의 숫자를 배열 a에 담음
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	// 2. 삽입정렬
	for(i=1; i<n; i++){
		temp=a[i];
		for(j=i-1; j>=0; j--){
			if(a[j]>temp) a[j+1]=a[j];
			else break;
		}
		a[j+1]=temp;
	}
	
	// 3. 배열 a를 출력
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
	
	return 0;
}