#include<iostream>
using namespace std;

//write a function that returns factorial of a number
//5! = 1*2*3*4*5 = 120

int factorial(int n){
    int ans = 1;
    for (int i=1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout << factorial(n);
    return 0;
}