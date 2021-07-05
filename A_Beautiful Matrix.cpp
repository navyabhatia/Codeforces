#include <iostream>
using namespace std;
int main() {
   int mat[6][6];//not 5 5 
   int i,j; long int temp;
   for(int rows=1;rows<=5;rows++){
       for(int cols=1;cols<=5;cols++){
           cin>>mat[rows][cols];
           if(mat[rows][cols]==1){
               cout<<abs(rows-3)+abs(cols-3);
           }
       }
   }
   return 0;
}