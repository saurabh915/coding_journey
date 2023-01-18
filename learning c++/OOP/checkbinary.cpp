#include<iostream>
#include<string>
using namespace std;
class binary
{
    private:
    string s;
     public:
     void chk_binary(void);
     void ones(void);
     void display(void);
     void read(void)
     {
         cout<<"enter the string";
         cin>>s;
     }
};
void binary :: ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
        
        
    }
    
}
void binary :: display()
{ cout<<"your string is "<<endl;
    for (int i = 0; i < s.length(); i++)
    {

        cout<<" "<<s.at(i);
    }
    
}
void binary :: chk_binary(){
    for (int i = 0; i < s.length(); i++)
    {
       if (s.at(i) !='0' && s.at(i) !='1')
       {
           cout<<"it is not binary string";
           exit(0);
       }
      
       
       
        
    }
    cout<<"it is binary string";
}
int main()
{
    binary no;
    no.read();
    no.chk_binary();
    no.display();
    no.ones();
    no.display();


}