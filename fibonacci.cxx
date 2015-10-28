
#include <iostream>
using namespace std;

int main(){ 
  
   int f0=0, f1=1, f;
    
    for(int i=0; i<11; i++)
       {cout << "f0=" << f0 << endl;
        f=f1+f0;
        f0=f1;
        f1=f;
       }
  return 0;}

