/*
    e^x = 1 + x/1! + x^2/2! + x^3/3! + ......
*/


#include<iostream>
using namespace std;
double e(int x,int n){
    static double f = 1,p = 1; //base condition factorial and power 
    double r;
    if(n==0){
        return 1;
    }
    r = e(x,n-1);

    p = p * x;

    f = f * n;

    return (r + p / f);

}

int main(){
    int p = 4, q = 15;
    cout<<e(p,q);
}