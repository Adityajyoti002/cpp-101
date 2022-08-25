#include<iostream>
using namespace std;

//computing binomial coefficient NcR, GIVEN N AND R
int factorial(int n){
    int ans = 1;
    for (int i=1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int binCoff(int N,int R){
    int ans = factorial(N)/(factorial(N-R)*factorial(R));
    return ans;
}

int main(){
    int N,R;
    //choose R objects out of a set N objects
    cin>>N>>R;

    cout << binCoff(N,R) <<endl;
    return 0; 

}