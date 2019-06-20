#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    int i, n, ans, len;
    string s;
    cin >> n;
    n++;/**This is because "\n" will be a specific line read by getline().**/
    while(n--){
        ans = 0;
        getline(cin, s);
        len = s.length();
        for(i = 0; i < len; i++)
            /**This step naturally converts a element of a string into a int.**/
            ans += s[i];
        if(ans != 0)
            cout << ans << endl;
    }

    return 0;
}

