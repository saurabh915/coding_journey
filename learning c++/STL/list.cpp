#include<iostream>
#include<list>
using namespace std;
void display(list <int> &llist)
{list <int > ::iterator iter;
    for (iter=llist.begin(); iter != llist.end(); iter++)
    {
       cout<<*iter;
       cout<<" ";
    }
    cout<<endl;
}
int main()
{

    //intializing the list;
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);//this will be added in vector after 1
    list1.push_back(3);//this will be added in vector after 2
    list1.push_back(4);
    
//initializing the pointer
    list<int>:: iterator iter;
    iter = list1.begin();
    // cout<<*iter;
    display(list1);

    //removing the list
    list1.pop_back();//for deleting last element
    list1.pop_front();//for deleting first element
    list1.remove(2);//for deleting any element
    display(list1);



list <int> list2(4);//here the list is empty but space is created;
list <int > ::iterator iter2;
iter2 = list2.begin();
*iter = 34; // as the memory is already allocated to list we can directly add elements
*iter++;
*iter = 35;
*iter++;
*iter = 36;
*iter++;
*iter =37;
*iter++;
display(list2);

//sorting list
list2.sort();
display(list2);


//merging lists
list1.merge(list2);
display(list1);


//reversing the list;
list1.reverse();
display(list1);


}