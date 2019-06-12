#include<bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    int i;
    int count[52];//65-90:A-Z;97-122:a-z
    memset(count, 0, sizeof(count));
    getline(cin, s);
    int length = s.length();
    int index, voc = 1;
    for(i = 0; i < length; i++){
        index = s[i];
        if(index >= 65 && index <= 90){
            count[index-65]++;
        }
        else if(index >= 97 && index <= 122){
            count[index - 71]++;
        }
        else
            voc++;
    }

    if(!(index >= 65 && index <= 90) && !(index >= 97 && index <= 122))
        voc--;

    cout << voc << endl;
    char c;
    for(i = 0; i < 26; i++){
        if(count[i] > 0){
            c = i + 65;
            cout << c << " : " << count[i] << endl;
        }
    }
    for(i = 26; i < 52; i++){
        if(count[i] > 0){
            c = i + 71;
            cout << c << " : " << count[i] << endl;
        }
    }

    return 0;
}
