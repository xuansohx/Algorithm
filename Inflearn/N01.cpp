#include <iostream>
using namespace std;
int main(){
    // 문제1) 1부터 N까지 M의 배수 합
    // 변수 선언 -> n과 m은 input, i는 for문, sum은 합계
    int n, m, i;
    int sum=0; // 초기화

    // std:: -> ::은 범위 지정 연산자
    // 이거 사용하기 싫으면 위에 'using namespace std;' 표시
    cin>>n>>m; // 처음 값은 n으로 다음 값은 m

    for(i=1; i<=n; i++){
        if(i%m == 0){
            sum = sum+i; // i가 m의 배수므로 i의 합 구하기
        }
    }
    cout<<sum;
    return 0;
}
