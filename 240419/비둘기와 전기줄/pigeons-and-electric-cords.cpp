#include <iostream>
using namespace std;
int a[11];

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0 ;

    for(int i = 1; i < 11 ; i++)
    {
        a[i]= -1;
    } 

    cin >> n;

    int res = 0;

    for(int i = 0 ; i < n ; i++)
    {
        int p  = 0 , l = 0;

        cin >> p >> l;

        if(a[p] == -1) a[p] = l;
        else if(a[p] != l) res++;

        a[p] = l;
    }

    cout<<res;

    return 0;
}