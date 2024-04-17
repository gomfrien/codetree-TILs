#include <iostream>

using namespace std;

int section[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;

    cin >> a >> b;
    cin >> c >> d;

    for(int i = a; i<= b ; i++)
    {
        section[i] = 1;
    }

    for(int i = c; i <= d ; i++)
    {
        section[i] = 1;
    }

    int res = 0;
    int oldflag = 0;
    int change = 0;

    for(int i = 0 ; i < 101 ; i++)
    {
        if(section[i] == 1)
        {
           res++;
        }

        if(oldflag != section[i]) change++;

        oldflag = section[i];   
    }

    if(change > 2) res= res-2;
    else res = res-1;

    cout << res;

    return 0;
}