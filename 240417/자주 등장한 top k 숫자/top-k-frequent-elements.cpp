#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map <int,int> buf;
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

    for(auto &t : buf)
    {
            int key = t.second;
            Cnt[key].push_back(t.first);
    }

    for(int i=100000;  i > 0 ; i--)
    {
        for(int j = 0; j< Cnt[i].size() ; j++)
        {
            cout<<Cnt[i][j]<<" ";
            k--;
            if(k == 0) break;
        }

        if(k == 0) break;
    }
    

    return 0;
}