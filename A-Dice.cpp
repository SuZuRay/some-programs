/*
Hello, 6th program in c++ dice rolling in switch case! 
using: pure random no. from 1-6 by using cstdlib and ctime for seed of srand() and rand()
problem I faced : extra "⬜" on row if there is a "⬛".
solved : solved in switch case. respective else for if.
and yes : help me to minimize my code.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
srand(time(0));
 int i,j,n;
 n=0;
 n = 1 + (rand()%6);
 cout << " Output:" << n << endl;
 for(i=0; i < 5; i++){
     for(j=0; j <5; j++){
     switch(n){
         case 1:
         if(( i == 2 && j == 2 ))
         cout << "⬛";
         else 
cout << "⬜";
         break;
         
         case 2:
         if((i == 1  && j == 1 ) || ( i == 3 && j == 3 ))
            cout << "⬛";
            else
cout << "⬜";
            break;
            
            case 3:
            if((i == 1  && j == 1 ) || ( i == 3 && j == 3 ) || (i == 2 && j == 2))
            cout << "⬛";
            else
cout << "⬜";
            break;
            
            case 4:
            if((i == 1  && j == 1 ) || ( i == 3 && j == 3 ) || (i == 3 && j == 1) || (i == 1 && j == 3)) 
            cout << "⬛";
            else
cout << "⬜";
            break;
            
            case 5:
            if((i == 1  && j == 1 ) || ( i == 3 && j == 1 ) || (i == 3 && j == 3) || (i == 1 && j == 3) || (i == 2 && j == 2))
            cout << "⬛";
            else
cout << "⬜";
            break;
            
            case 6:
            if((i == 1  && j == 1 ) || ( i == 3 && j == 3 ) || (i == 3 && j == 1) || (i == 1 && j == 3) || (i == 1 && j == 2) || (i == 3 && j == 2))
            cout << "⬛";
            else
cout << "⬜";

         }
         
     }
     cout<<endl;
 }
 
 
    return 0;
}
