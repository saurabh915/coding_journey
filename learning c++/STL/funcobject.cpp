#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
int arr[] ={1,23,3,55,65,32,2};
sort(arr,arr+7,greater<int>());//here 8 specifies number of elements you want to sort and greater is to sort in decending order
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<endl;
}

}