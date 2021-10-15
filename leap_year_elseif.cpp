#include <bits/stdc++.h>
using namespace std;
int main(){
    int year1;
    cin>>year1;
    if(year1%100==0){
    if(year1%400==0)
    {
        cout<<"leap year"<<endl;
    }
    else
    cout<<"not leap"<<endl;
}
else if(year1%4==0)
cout<<"leap";
else 
cout<<"not leap"<<endl;

}