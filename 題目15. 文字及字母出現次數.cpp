#include<bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    int i;
    int count[26];//65-90:A-Z;97-122:a-z
    int length, index, voc;
    while(getline(cin, s)){
        memset(count, 0, sizeof(count));
        length = s.length();
        voc = 0;
        for(i = 0; i < length; i++){
            index = s[i];
            if(index >= 65 && index <= 90){
                count[index-65]++;
            }
            else if(index >= 97 && index <= 122){
                count[index - 97]++;
            }
            else if(s[i] == ' ')
                voc++;
        }
        voc++;

        cout << voc << endl;
        char c;
        for(i = 0; i < 26; i++){
            if(count[i] > 0){
                c = i + 97;
                cout << c << " : " << count[i] << endl;
            }
        }
    }

    return 0;
}
