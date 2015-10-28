
#include <iostream>
using namespace std;

int main(){ 
   
  int N;
   cout << "Bitte Schrittanzahl N eingeben"<< endl;
   cin >> N;

   
   int f0=0, f1=1, f;
    
    for(int i=0; i<N+1; i++)
       {cout << "f0=" << f0 << endl;
        f=f1+f0;
        f0=f1;
        f1=f;
       }
  return 0;}

