#include<iostream>
using namespace std;
int main(){
         int t;string str;int l;
         cin>>t;
         while(t!=0){
                  cin>>str;
                  l=str.length();
                  if(l>10){
                           cout<<str[0]<<l-2<<str[l-1]<<endl;
                  }
                  else{
                       cout<<str<<endl;    
                  }
                  t--;
         }
         
         return 0;
}