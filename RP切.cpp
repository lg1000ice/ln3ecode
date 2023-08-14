#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;
int rp1,rp2,lk1,lk2,xingyunnushen;
char p1name[8888],p2name[8888];
string a;
int main()
{
    srand(time(NULL));
    cout<<"请输入玩家1的昵称";
    cin>>p1name;
    cout<<"请输入玩家2的昵称";
    cin>>p2name;
    rp1=rand()%20000+30000;
    rp2=rand()%20000+30000;
    while(1)
    {
        cout<<p1name<<"的rp值为"<<rp1<<endl;
        cout<<p2name<<"的rp值为"<<rp2<<endl;
        cout<<"请输入"<<p1name<<"的幸运值"<<endl;
        cin>>lk1;
        xingyunnushen=rand()%10;
        if(xingyunnushen<=2)
        {
            lk1=(rand()*100+lk1)*100%3001+12888;
        }
        else
        {
            lk1=(rand()*100+lk1)*100%3001+2678;
        }
        cout<<"RP切！对"<<p2name<<"造成了"<<lk1<<"点伤害！"<<endl;
        rp2-=lk1;
        if(rp2<=0)
        {
            cout<<p1name<<"胜利！成为了新的RP之王！"<<endl;
            break;
        }
        cout<<"请输入"<<p2name<<"的幸运值"<<endl;
        cin>>lk2;
        if(xingyunnushen<=2)
        {
            lk1=(rand()*100+lk1)*100%3001+10000;
        }
        else
        {
            lk1=(rand()*100+lk1)*100%3001+2678;
        }
        cout<<"RP切！对"<<p1name<<"造成了"<<lk2<<"点伤害！"<<endl;
        rp1-=lk2;
        if(rp1<=0)
        {
            cout<<p2name<<"胜利！成为了新的RP之王！"<<endl;
            break;
        }
    }
    cout<<"请按任意键加enter结束游戏";
    cin>>a;
    return 0;
 }
