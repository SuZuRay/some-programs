/*
Hello, 2nd program in c++ for nth term of fibonacci sequence.
fibonacci sequence: first two terms are defined as a=0,b=1 
next term = c = a+b, a=b, b=c for next term.
problem I faced: 
printing random integers when n=1 or 2.
solved : forget to initialize 'c'.
*/
#include <iostream>
using namespace std;
int main() {
long long int a,b,c,n;
cin>>n;
a=0;
b=1;
c=0;
 if(n<=0)
 {
 cout<<"Input must be a valid positive integer!";
}

 else if(n==2)
 {
 cout<<"2nd term of fibonacci sequence is "<<b<<endl;
 }
 else{
long long int count=3;
while(count<=n){
    c=a+b;
    a=b;
    b=c;
    count++;
    }
    cout<<n<<" term of fibonacci sequence is: "<<c<<endl;
}
    return 0;
}

