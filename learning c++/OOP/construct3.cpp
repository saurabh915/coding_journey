#include<iostream>
#include<math.h>
using namespace std;
class point 
{
    int a,b;
    public:
 
    friend void difference(point , point );//here declaration of friend takes place
    point(int x, int y) 
    {
        a=x;
        b=y;
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;

    }
   
};
 void difference(point o1,point o2)//this function is not part of point class at all
    {
        int xdiff = o1.a -o2.a;
        int ydiff= o1.b-o2.b;
      double distance =sqrt((xdiff*xdiff)+(ydiff*ydiff));
       cout<<"difference is"<<distance;
    }
 
int main()
{
point c(5,7),d(4,7);//construtors are called 

 difference(c,d);
}