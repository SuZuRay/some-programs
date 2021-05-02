/*
Hello, 3rd program in c++ for factorial calculation of nth number.
factorial: no. of possible arrangements for n objects, i.e factorial of 3 A= 3! = 3*2*1, 4! = 4*3*2*1, etc.
problem I faced: getting output as 0! = 1 due to default assinging of n = 0 on receive of  non integer value (a, b, @, %) as input for int n.
solved: 1st try > used isdigit(n) which returns false for integers too after research found that its only true for ascii values of numbers (correct me if I am wrong)

2nd try > using cin.fail whenever fails to take input.
*/

#include <iostream>
using namespace std;

int main() {
int n,product;
cin>>n;
product =1;
int count = 1;
if(cin.fail()){
    cout<<"input must be an integer!";
}
else if(n>=0){
    

while(count<=n)
{
    product *= count;
    count++;
}
cout<<"factorial of "<<n<<" is: "<<product.;
}

else{
    cout<<"input can't be negative!";
}
    return 0;
} 

/*
optional short code using recursion:
#include <iostream>
using namespace std;


int fact(int n){
if(n == 1){
return (1);
}
else{
    return n*fact(n-1);
    }
}
int main(){
int x;
cin >> x;
cout << fact(x);
    return 0;
}
*/
