#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int evensum=0;
int oddsum=0;
int post=1;
while(n>0){
int ld=n%10;
if(post%2==0){
evensum+=ld;}
else 
oddsum+=ld;
post++;
n=n/10;}
cout<<evensum<<" "<<oddsum;










    return 0;
}