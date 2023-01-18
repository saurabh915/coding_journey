//here in this program if base pointer is pointing to derived class  object then derived class object will be called 
//virtual functions are used to avoid collition during multiple inheritance..
#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title =s;
        rating = r;
    }//if we call display function which is not virtual then display function will be called as it is in public class and it is inherited publically
    virtual void display() {}//here it is default function but as it is virtual and base pointer is pointing to derived class the derived function display will be called. 
};
class cwhvideo : public cwh
{
    int videolength;

public:
    cwhvideo(string s, float r, int vl) : cwh(s, r)//here constructor of base class is called from derived class there parameters are private
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title" << title << endl;
        cout << "ratings: " << rating << "out of 5 stars" << endl;
        cout<<"length of this video is: "<<videolength<<" minutes"<<endl;
    }
};
class cwhtext : public cwh
{
    int words;

public:
cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    
     void display()
    {
        cout << "this is an amazing text tutorial with title" << title << endl;
        cout << "ratings: " << rating << "out of 5 stars" << endl;
        cout<<"no of length in this text tutorial is: "<<words<<" words"<<endl;
    }
};


int main(){
    string title;
    float rating, vlen;
    int words;

// //for code with harry video 
// title ="this is django tutorial";
// vlen = 4.56;
// rating = 4.89;
// cwhvideo djvideo(title,rating,vlen);
// djvideo.display();


// //for code with harry text
// title ="this is django text";
// words = 446;
// rating = 4.89;
// cwhtext djtext(title,rating,words);
// djtext.display();

//with pointers
cwhvideo djvideo(title,rating,vlen);
djvideo.display();
cwhtext djtext(title,rating,words);

cwh* tuts[2]; //here the pointer is of base class 
tuts[0]=&djvideo; //and base pointer is pointing to derived class object
tuts[1]= &djtext;//and base pointer is pointing to derived class object
tuts[0]->display();//calling the display but as there are three display method which will be run
tuts[1]->display();

return 0;
}

//rules for virtual function
// 1. they cannot be static 
// 2. they are accessed by object pointers
// 3.  virtual functions can be friend of another class
// 4.   a function in a base class can might not be used
// 5.  a virtual function defined in a base  class there is no nessesity to derive it into base class