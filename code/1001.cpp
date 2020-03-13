#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    string s = to_string(a + b);
    int l = s.length();
    for(int i=0;i<l;i++){
        cout << s[i];
        if((l-1-i)%3==0&&(l-1-i)!=0&&s[i]!='-') cout << ',';
    }
    return 0;
}
