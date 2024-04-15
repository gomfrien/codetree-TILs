#include <iostream>

using namespace std;

struct Node
{
    int Cnt;

    Node* pre;
    Node* next;
}*head, *tail, buf[110000]; 

int bCnt=0 ; 

void init()
{
    buf[bCnt] = {0,nullptr,nullptr};
    head = &buf[0];

    buf[bCnt] = {0,nullptr,nullptr};
    tail = &buf[100001];

    head->pre = nullptr;
    head->next = tail;

    tail->next = nullptr;
    tail->pre = head;

    for(int i = 1 ; i <= 100000 ; i++)
    {
        buf[i] = {0,nullptr,nullptr}; 
    }
}

void UpdateList(int t)
{

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

        buf[t].Cnt++;

        UpdateList(t);
    }
    

    return 0;
}