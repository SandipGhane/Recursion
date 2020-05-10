#include<iostream>
#include<stack>
using namespace std;

stack <int> st;
void insert_in_bottom(int a){
  //  cout<<"in function";
    if(st.size()==0){
        st.push(a);
      //  cout<<a<<"\n";
    }
    else{

        int b = st.top();
        st.pop();

        insert_in_bottom(a);

        st.push(b);
    }
}
void reverse(){
    if(st.size()>0){
        int temp = st.top();
        //cout<<"temp"<<temp;
        st.pop();

        reverse();

        insert_in_bottom(temp);
    }
}   
int main(){
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
  //  cout<<"Stack Before Reverse\n";
    /*
    */

    reverse();  
    while(!st.empty()){
        cout<<st.top()<<"\n";
        st.pop();
    }
}