//using vectors
#include<iostream>
#include<vector>

using namespace std;
template <class T>
 void display(vector <T> &v)
    {
        for (int i = 0; i < v.size(); i++)//as vector is continuous memmory allocation we can start with zero upto vector size;
        {
            cout<<v[i]<<" ";
            // cout<<v.at(i)<<" ";//print the element which is at position i;
        }
        cout<<endl;
    }

int main()
{
    vector<int> vec1;//here is declaration of vector  and v1 is like object
    // vector<char> vec2(6);//anther way to create a vector of leght 4
    // vec2.push_back('5');
    // vec2.push_back('7');//this will be added in vector after 5
    //  vec2.push_back('9');//this will be added in vector after 7

    // display(vec2);
    
    
//     vector <int> vec4(6,0);//adds 0 six times
//     display(vec4);
//     cout<<"size of vextor is"<<endl;
//    cout<<vec4.size();
   
    // vector<char> vec3(vec2);//6 elements vector from vec2
    // display(vec3);
    
    
    
    
    int element,size;
    cout<<"enter the size of a vector"<<endl;
    cin>>size;  
    for(int i =0; i<10;i++)
    {
        cout<<"enter the element to add to this vector";
        cin>>element;
        vec1.push_back(element);
    }
     display(vec1);
    vec1.erase(vec1.begin());//to remove last element
    display(vec1);
    
    
    
    
    //for inserting element at any position using pointers
   vector<int>::iterator itr =vec1.begin();//due to this itr will point to begining of vector
    // vec1.insert(itr,45);//as itr is pointing to 1st element of vector new element will be inserted before first.
   
    // vec1.insert(itr,54);
    
    
    // vec1.insert(itr+1,50);//as itr is pointing to the begining itr +1 will point just next of begining and add before that.
    // vec1.insert(itr+2,45,6);//45 is the number of times you want to print
    // display(vec1);
    return 0;
}