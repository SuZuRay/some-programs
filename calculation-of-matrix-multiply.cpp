/* 
Hello, 4th program in c++ for multiplication of 3 × 3 matrix using multidimensional arrays.

3 × 3 matrix multiplication calculation :
input 18 digits 1st 9 belongs to first matrix according to a[0][0], a[0][1], a[0][2]... order
you can type like this for convinience :
example: input :
1 2 3
4 5 6
7 8 9

1 1 1
1 1 1
1 1 1

output:
6 6 6
15 15 15
24 24 24

problem I faced : getting unexpected output from a3[i][j].
solved : solved after initializing a3[3][3].
also : I like to see codes as small as possible so if you can suggest something (related to multidimensional arrays) to make it short--> appreciated
*/
#include <iostream>
using namespace std;
int main()
 {
int i, j, a1[3][3], a2[3][3];
for(i=0; i < 3; i++){
    for(j=0; j<3; j++){
        cin >> a1[i][j];
    }
}
for(i=0; i < 3; i++){
    for(j=0; j<3; j++){
        cin >> a2[i][j];
    }
}
if(cin.fail()){
    cout << "failed to take input!\ninput must be 18 digits / integrs only.";
}
else{
cout << "your input:\n\n";

cout << "1st matrix:\n\n";
for(i=0; i < 3; i++){
for(j=0; j < 3; j++){
    cout << a1[i][j] << " ";
    
}
cout << endl;
    }

    
cout << "\n2nd matrix:\n\n";
for(i=0; i < 3; i++){
for(j=0; j < 3; j++){
    cout << a2[i][j] << " " ;
    
}
    cout << endl;
    }

   int k, a3[3][3]{};
   
   for(i=0; i < 3; i++){

    for(j=0; j < 3; j++){
        
        for(k=0; k < 3; k++){
            a3[i][j] += a1[i][k]*a2[k][j];
         
            }
       
    }
 
   }

   cout << "\nmatrix multiplication answer:\n\n";
for(i=0; i < 3; i++){
for(j=0; j < 3; j++){
    cout << a3[i][j] << " " ;   
} 
cout << endl;
}
}
    return 0;
}
