#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i, num = 0;
    string s1, s2;
    int index;
    cin >> s1 >> s2;
    index = s2.find(s1);
    while(index >= 0){
        num++;
        i = index + 1;
        index = s2.find(s1, i);
    }
    printf("%d\n", num);

    return 0;
}
