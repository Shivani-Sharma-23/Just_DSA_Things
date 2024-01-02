#include <iostream>
using namespace std;
int main()
{
  int test[3][3]; 
    test[0][0]=5; 
    test[0][1]=10;   
    test[1][1]=15;  
    test[1][2]=20;  
    test[2][0]=30;  
    test[2][2]=10;  
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; 
    return 0;  
} 