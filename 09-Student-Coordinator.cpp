#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    cin>>t;
    while(t>0){
        int i,n, m1=0, m2=0 ,m3 = 0;
        
        cin>>n;                     // number of students
        
        for(i=0; i<n; i++ ){
            char str[10];
            cin>>str;               // input section
            
            if (strcmp(str,"M1")==0)        //  checking for section and incrementing respective counter variable
                m1 = m1 + 1;
            else if (strcmp(str,"M2")==0)
                m2 += 1;
            else if (strcmp(str,"M3")==0)
                m3 += 1;
            
        }
        
        for(i=0; i<m1; i++)             // printing sections respective number of times.
            cout<<"M1 ";
        
        for(i=0; i<m2; i++)
            cout<<"M2 ";
        
        for(i=0; i<m3; i++)
            cout<<"M3 ";
        
        t--;
        cout<<endl;
    }
    return 0;
}
