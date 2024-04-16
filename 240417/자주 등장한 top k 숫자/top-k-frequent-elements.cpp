#include <iostream>
#include <vector>

using namespace std;

int buf[110000];
vector <int> Cnt[110000];

int main() {
    // 여기에 코드를 작성해주세요.

    int k,n =0;

    cin>>n>>k;

    for(int i = 0 ; i< n ; i++)
    {
        int t = 0; 
        cin>>t;

        buf[t]++;
    }

    for(int i = 1 ; i <= 100000 ; i++)
    {
        if(buf[i] > 0)
        {
            int key = buf[i];
            Cnt[key].push_back(i);
        }
    }

    for(int i=100000;  i > 0 ; i--)
    {
        for(int j = Cnt[i].size()-1; j>= 0 ; j--)
        {
            cout<<Cnt[i][j]<<" ";
            k--;
            if(k == 0) break;
        }

        if(k == 0) break;
    }
    

    return 0;
}