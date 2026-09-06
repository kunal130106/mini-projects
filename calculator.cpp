#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the type of operation you want to perform"<<endl;
    cin>>op;
    switch (op){
    case '+' : cout<<(a+b)<<endl;
    break;
    case '-' : cout<<(a-b)<<endl;
    break;

    case '*' : cout<<(a*b)<<endl;
    break;
    case '/' : cout<<(a/b)<<endl;
    break;

    case '%' : cout<<(a%b)<<endl;
    break;
    }
    cout<<endl;
return 0;
}

