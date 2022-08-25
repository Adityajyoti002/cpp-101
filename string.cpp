#include<iostream>
#include<string>
using namespace std;
int main(){
    string greeting = "hello world!";
    string iterate = "moshi moshi";
    string pi = greeting + " " + iterate;
    string fullname = greeting.append(iterate);
    cout<<greeting<<endl;
    cout<<iterate<<endl;
    cout<<pi<<endl;
    cout<<fullname<<endl;
    return 0;
}