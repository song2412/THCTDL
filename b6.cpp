#include <iostream>
using namespace std;
int Tongchan(int n)
{
    if(n==0)
    {
        return 0;
    }else
{int cs=n%10;
int kq=Tongchan(n/10);
if (cs%2==0){
    kq=kq+cs;
}
return kq;
}
}
int main(){
    count<<Tongchan<<endl;
    return 0;
}