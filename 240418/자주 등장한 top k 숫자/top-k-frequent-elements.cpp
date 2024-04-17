#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map <int,int> keymap;
vector <int> Cnt[110000];

struct Node 
{
    long long num;

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

        buf[bCnt] = {10000000000,nullptr,nullptr};
        tail[i] = &buf[bCnt++];

        head[i]->next = tail[i];
        tail[i]->pre = head[i];
    }
}

void push_back(int key, int num)
{
    buf[bCnt] = {num,nullptr,nullptr};
    Node* p = &buf[bCnt++];
    for(Node* c = head[key]->next ; c != nullptr ; c= c->next)
    {
        if(p->num < c->num)
        {
            p->pre = c->pre;
            p->next = c;

            c->pre->next = p;
            c->pre = p;
            break;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int k,n =0;

    init();


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
            push_back(key,t.first);
    }

    for(int i=100000;  i > 0 ; i--)
    {
        Node* p = tail[i]->pre;
        for(p; p->num != 0 ; p = p->pre)
        {
            cout<<p->num<<" ";
            k--;

            if(k == 0) break;
        }

        if(k == 0) break;
    }
    

    return 0;
}