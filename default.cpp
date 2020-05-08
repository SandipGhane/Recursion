#include<iostream>
using namespace std;

void fun(int x){
    cout<<x<<"\n";
    if(x>=3){
        return;
    }
    fun(x+1);
    fun(x+2);
}
int main(){
    fun(0);
}