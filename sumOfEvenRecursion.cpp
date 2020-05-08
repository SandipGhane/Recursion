#include<iostream>
using namespace std;
void sumEvenNo(int a[],int i,int result){
    if(i < 0){
        cout<<"sum=>"<<result;
        return;
    }
    if(a[i] % 2==0){
        result=result+a[i];
    }
    sumEvenNo(a,i-1,result);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    //cout<<size;
    int sum=0;
    sumEvenNo(arr,size-1,sum);
}