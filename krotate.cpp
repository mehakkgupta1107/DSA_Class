#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k=0;
    for (char ch:s){
        if(isdigit(ch)){
            int d= ch='0';
            k+=d*d;
    }
    }
    string letters="";
    for (char ch:s){
        if(isalpha(ch))
        letters+=ch;
    }
    int m=letters.length();
    k%=m;
    if(k%2==0){
        rotate(letters.begin(),letters.end()-k,letters.end());
    }
    else{
        rotate(letters.begin(),letters.begin()+k,letters.end());
    }
    int j=0;
    for(char & ch:s){
        if(isalpha(ch)){
            ch=letters[j++];
        }
    }
    cout<<s<<endl;
    return 0;
}