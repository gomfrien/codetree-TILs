#include <iostream>

using namespace std;

int a[100];
int b[100];

int Min=101,Max=0;

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0;
    cin >> n ;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i]>>b[i];

        if(a[i] < Min ) Min = a[i];
        if(b[i] > Max ) Max = b[i];
    }

    for(int i = Min ; i <= Max; i++)
    {
        int res = 0; 
        for(int j = 0 ; j < n ; j++)
        {
            if(a[j] <= i && b[j] >= i) res++;
        }

        if(res >= n-1) 
        {
            cout << "Yes";
            return 0;
        }    
    }

    cout<<"No";

    return 0;
}