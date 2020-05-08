#include<iostream>
using namespace std;
int calcPow(int n,int m){
    if(n < m){
        return(m,n);
    }
    else if(m != 0){
        return(n+calcPow(n,m-1));
    }
    else{
        return 0;
    }

}
int main(){
    int x = 5,y = 2;
    cout<<calcPow(x,y);
}