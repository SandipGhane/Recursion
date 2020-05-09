#include<iostream>
#include<queue>
using namespace std;
void reverseQueque(queue<int>& qu){
    if(qu.empty()){
        return;
    }

    int data = qu.front();
    qu.pop();

    reverseQueque(qu);

    qu.push(data);
}
void printQ(queue<int> qu){
    while (!qu.empty())
    {
        cout<<qu.front()<<"\n";
        qu.pop();
    }
    
}
int main(){
    queue<int> q;
    q.push(56); 
    q.push(27); 
    q.push(30); 
    q.push(45); 
    q.push(85); 
    q.push(92); 
    q.push(58); 
    q.push(80); 
    q.push(90); 
    q.push(100); 

    reverseQueque(q);
    printQ(q);
}