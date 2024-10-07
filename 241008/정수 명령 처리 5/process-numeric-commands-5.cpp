#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int N = 0;
    int n =0;

    cin>>N;

    vector<int>arr;

    for(int i = 0 ; i < N; i++)
    {
        string str="";

        cin>>str;

        if(str == "push_back")
        {
            n =0;
            cin>>n;
            arr.push_back(n);
        }
        
        if(str =="pop_back")
        {
            arr.pop_back();
        }

        if(str == "get")
        {   
            n=0;
            cin>>n;
            cout<<arr[n-1]<<endl;
        }

        if(str =="size")
        {
            cout<<arr.size()<<endl;
        }
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}