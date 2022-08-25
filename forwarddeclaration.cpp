#include<iostream>
using namespace std;

void playmusic(int songid);
int main(){
    playmusic(5);
    return 0;
}
//Declaration + Definition
void playmusic(int songid){
    cout << "playing music"<<songid<<endl;
}