#include <iostream>
#include <Windows.h>
#include <unistd.h>
using namespace std;
int main()
{
	int i;
   int min=0;
   for (i =1; i <= 240; i++)
   {
        if(i<60){
            cout<<min<<":"<<i<<endl;
            if (i==60)
            {
                continue;
            }
            
        }
        if (i>=60)
        {
            cout<<min<<":"<<i-60*min<<endl;
        }
        
        if(i%60==0){min++;}
     sleep(1);
        
   }
}
