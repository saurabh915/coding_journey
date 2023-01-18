
//int this constructor there are different data types in place of parameters but there are more number of constructoers 
//so it important to choose which constructor 
#include<iostream>
using namespace std;
class bankdeposite
{
    int principal;
    int years;
    float interestrate;
    float returnValue;
 public:
    void show();
 bankdeposite();
 bankdeposite(int p,int y, float r);
bankdeposite(int p, int y, int r);
};
bankdeposite::bankdeposite(){}
bankdeposite::bankdeposite(int p, int y,float r)
{
    principal =p;
    years = y;
    interestrate =r;

    returnValue =principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue*(1+r);
    }
    
}
bankdeposite::bankdeposite(int p, int y,int r)
{
    principal =p;
    years = y;
    interestrate =(float)r/100;

    returnValue =principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1+interestrate);
    }
    
};
void bankdeposite::show(){
    cout<<endl<<"principal amount was"<<principal
    <<"return value after"<<years
    <<"years"
    <<"is "<<returnValue<<endl;         
}

int main()
{
 bankdeposite bd1,bd2,bd3;
int p,y;
float r;
int R;
  cin>>p>>y>>r;
  bd1=bankdeposite(p,y,r);//here r is in float
  bd1.show();
  cin>>p>>y>>R;
  bd1=bankdeposite(p,y,R);//here R is in integer. 
  bd1.show();
}