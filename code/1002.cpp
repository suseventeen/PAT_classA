#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double e[1001]={0};
    int n1,n2,a,s=0;
    double b;
    cin >> n1;
    for(int i=0;i<n1;i++){
        cin >> a >> b;
        e[a]+=b;
    }
    cin >> n2;
    for(int i=0;i<n2;i++){
        cin >> a >> b;
        e[a]+=b;
    }
    for(int i=0;i<1001;i++){
        if(e[i]!=0) s++;
    }
    cout << s;
    if(s!=0) cout << ' ';   // 注意此处若为0，则不能输出空格
    for(int i=1000;i>=0;i--){
        if(e[i]!=0.0) {
            s--;
            cout << fixed << setprecision(1) << i << ' ' << e[i];
            if(s!=0) cout << ' ';
        }
    }
    return 0;
}
