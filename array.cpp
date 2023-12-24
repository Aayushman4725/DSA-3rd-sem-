#include <iostream>
using namespace std;

int main()
{
    int array[10]={1,23,43,4,3};
    int k=10;
    int c,position;


  
   cout<<"Enter the position:";
   cin>>position;

   cout<<"Enter the number:";
   cin>>c;
   
    for(int i=position;i<=10;position++)
    {
        array[i]=c;    
    }

      for(int i=0; i<=10;i++)
    {
        cout<<array[i]<<endl;
    }

  

  
}


    
