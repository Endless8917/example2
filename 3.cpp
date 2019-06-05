#include<iostream>
using namespace std;

int main(){
  int a,b,k;
  cin>>a>>b;
  k=a*b;

    while(a!=0 && b!=0){
        if(a>b) a%=b;
        else if(b>a) b%=a;
    }
    if(a>b) cout<<k/a;
    else if(b>a) cout<<k/b;
    
    
    
    
    
    
}



