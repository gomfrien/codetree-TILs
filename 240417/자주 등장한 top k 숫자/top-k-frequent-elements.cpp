#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map <int,int> keymap;
vector <int> Cnt[110000];

struct Node 
{
    int num;

    Node* pre;
    Node* next;

}*head[110000], *tail[110000], buf[1100000];

int bCnt = 0;

void init()
{
    for(int i = 0 ; i < 110000; i++)
    {
        buf[bCnt] = {0,nullptr,nullptr};
        head[i] = &buf[bCnt++];

        buf[bCnt] = {110000,nullptr,nullptr};
        tail[i] = &buf[bCnt++];

        head[i]->next = tail[i];
        tail[i]->pre = head[i];
    }
}

void push_back(int key, int num)
{
    buf[bCnt] = {num,nullptr,nullptr};
    Node* p = &buf[bCnt++];
    for(Node* c = head[key]->next ; c=c->next; c->next != nullptr)
    {
        if(p->num < c->num)
        {
            p->pre = c->pre;
            p->next = c;
            c->pre = p;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int k,n =0;

    cin>>n>>k;

    for(int i = 0 ; i< n ; i++)
    {
        int t = 0; 
        cin>>t;

        keymap[t]++;
    }

    for(auto &t : keymap)
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