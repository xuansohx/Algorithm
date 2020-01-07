#include <iostream>
using namespace std;
int main(){
    // 문제2) 자연수의 합
    int a, b, sum=0;
    int i; // for문에서 사용 할 변수도 선언
    cin>>a>>b;
    for(i=a; i<b; i++){
        cout<<i<<"+";
        sum = sum+i;
    }
    cout<<i<<"=";
    cout<<sum+i;
    
    return 0;
}