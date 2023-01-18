#include<iostream>
using namespace std;
class student
{
    int roll_number;
    public:
    void set_roll_no(int );
    void get_roll_no();
};
void student:: set_roll_no(int m)
{
    roll_number = m;

}
void student::get_roll_no()
{
    cout<<"the roll no of student is "<<roll_number<<endl;
}
class exam :public student{
    protected:
    float maths;
    float physics;
 public:
void set_marks(float,float);
void get_marks();

};
void exam  :: set_marks(float m1,float p1)
{
    maths = m1;
    physics =p1;
}
void exam  :: get_marks()
{
   cout<<"marks of maths are"<<maths<<endl;
   cout<<"marks of physics are"<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
    void display()
    {
         get_roll_no();
        cout<<"Your percentage is "<<(maths+physics)/2 <<endl;
    }
};
int main()
{
    result harry;
    harry.set_roll_no(45);
    harry.set_marks(14,15);
    harry.display();

}