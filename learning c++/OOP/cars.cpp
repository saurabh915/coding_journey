#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;
    void displaydata()
    {
        cout << "name of brand is\n" << brand << "\n name of model is\n" << model << "\nyear of manufacturing is\n" << year;
    }
};
int main()
{
    car std;
    std.brand = "BMW";
    std.model = "X5";
    std.year = 1969;
    std.displaydata();

    car std2;
    std2.brand = "swift";
    std2.model = "suzuki";
    std2.year = 1909;
    std.displaydata();

    return 0;
}