#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    int flag = 0;
    int i, j;
    if(s1[0] == s1[2] && s1[2] == s1[4])
        flag = 1;
    else if(s2[0] == s2[2] && s2[2] == s2[4])
        flag = 1;
    else if(s3[0] == s3[2] && s3[2] == s3[4])
        flag = 1;
    else if(s1[0] == s2[0] && s2[0] == s3[0])
        flag = 1;
    else if(s1[2] == s2[2] && s2[2] == s3[2])
        flag = 1;
    else if(s1[4] == s2[4] && s2[4] == s3[4])
        flag = 1;
    else if(s1[0] == s2[2] && s2[2] == s3[4])
        flag = 1;
    else if(s1[4] == s2[2] && s2[2] == s3[0])
        flag = 1;

    if(flag == 1)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
