#include <iostream>

using namespace std;
int a[100], b[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0 ; 

    cin >> n ; 

    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i = a[0] ; i <= b[0] ; i++)
    {
        int j = 1;
        for( j = 1 ; j < n ; j++)
        {
            if(i>=a[j] && i<=b[j])
            {
                
            }
            else
            {
                break;
            }
        }

        if(j == n)
        {
            cout << "Yes";
            return 0;
        } 
    }

    cout<<"No";    
    return 0;
}