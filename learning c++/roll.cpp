#include <iostream>
using namespace std;
class student
{
public:
    int rollnumber;
    string name;
    void displaydata()
    {
        cout << rollnumber << " name of student is:" << name;
    }
};
int main()
{
    student std;
    std.rollnumber = 1;
    std.name = "unknown";
    std.displaydata();
    student std1;
    std.rollnumber = 2;
    std.name = "unknownn2";
    std.displaydata();
}
