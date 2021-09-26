#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a>b){
    cout<<"a is larger and b is smaller"<<endl;
}
else if(a==b){
    cout<<"both are equal"<<endl;
}
else{
   cout<<"b is larger and a is smaller"<<endl;
}
return 0;
}