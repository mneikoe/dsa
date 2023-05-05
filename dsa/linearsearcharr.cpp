#include<iostream>
using namespace std;

class input {
  public:
    int size, key;
    int arr1[100];

    int search(){
        int i;
        for(int i=0;i<size;i++)
        {
            if(arr1[i]==key)
            {
                return i+1;
            }
        }
        return -1;
    }

    void input_func(){
        cout<<"enter size of your array"<<endl;
        cin>>size;
        cout<<"enter elements of your array"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr1[i];
        }
        cout<<"enter the key value you want to search in the array"<<endl;
        cin>>key;
        int y=search();
        if(y==-1)
        {
            cout<<"element not found"<<endl;
        }
        else
        {
            cout<<"element found at "<<y<<endl;
        }
    }
};

int main() {
  input x;
  x.input_func();
  return 0;
}