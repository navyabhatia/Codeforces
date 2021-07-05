#include <iostream>
#include<string>
//#include<cstring>
using namespace std;
int main() {
    string s1,s2;long long int val;
    cin>>s1>>s2;int i;int j;
    for(i=0;i<=s1.length();i++){
        if (islower(s1[i]))
            s1[i] = toupper(s1[i]);
    }
    for(j=0;j<=s2.length();j++){
        if (islower(s2[j]))
            s2[j] = toupper(s2[j]);
    }
    val=s1.compare(s2);
    if(val>0)cout<<1<<endl;
    else if(val==0)cout<<0<<endl;
    else if (val<0)cout<<-1<<endl;
    return 0;
 
}