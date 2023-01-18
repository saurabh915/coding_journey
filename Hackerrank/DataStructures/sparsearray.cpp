#include<iostream>
using namespace std;
int main()
{
    int inputs,q,count=0;
    // int check =0;
    char input[20][1000];
    char queries[20][100];
    cout<<"enter the no. of input string";
    cin>>inputs;
    cout<<"enter the input strings";
    for (int k = 0; k < inputs; k++)
    {
        cin>>input[k];
       
    }
     cout<<"enter the no. of queries string";
    cin>>q;
    cout<<"enter the queries strings";
    for (int i = 0; i < q; i++)
    {
          cin>>queries[i];
    }
     
    for (int m = 0; m < q; m++)
    {
        for (int j = 0; j < inputs; j++)
        {

            // for (int k = i-1; k > 0; k--)
            // {
            //     if (queries[i] != input[k])
            //     {
            //         check++;
            //     }
                
               
            // }
            cout<<queries[m]<<input[j]<<endl;
          cout<<count<<endl;
            
            if (queries[m]==input[j] )
           {
              
               count++;
           }
        }
          
        cout<<count<<endl;
    }
    
     
    
   
    
   
 
  
}