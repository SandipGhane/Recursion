#include<iostream>
#include<queue>
using namespace std;
void FrontToLast(queue<int>& q,int qsize){
    //cout<<"F::>size"<<qsize<<"\n";
    //cout<<"F::>Ele"
    if(qsize <= 0){
        return;
    }
    q.push(q.front());
    q.pop();
    FrontToLast(q,qsize-1);
}
void pushInQueque(queue<int>& q,int temp,int qsize){
    //cout<<"Temp:"<<temp<<"\n";
    //cout<<"Size:"<<qsize<<"\n";

    if( qsize==0 || q.empty()){
        q.push(temp);
        return;
    }
    else if(temp <= q.front()){
        q.push(temp);
        FrontToLast(q,qsize);
    }
    else{
        q.push(q.front());
        q.pop();

        pushInQueque(q,temp,qsize-1);
    }
}
void sortQueue(queue<int>& q){
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();

    sortQueue(q);

    pushInQueque(q,temp,q.size());
}
int main(){
    queue <int> qu;
    qu.push(10); 
    qu.push(7); 
    qu.push(16); 
    qu.push(9); 
    qu.push(20); 
    qu.push(5);
   
    sortQueue(qu);

    while (!qu.empty())
    {
        cout<<qu.front()<<"\n";
        qu.pop();
    }   
}