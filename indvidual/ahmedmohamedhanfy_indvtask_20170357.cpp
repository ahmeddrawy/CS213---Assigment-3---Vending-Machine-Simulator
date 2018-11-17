#include <bits/stdc++.h>
using   namespace std;



void permstring_backtracking(string &s , int indx = 0 ){
    if(indx == s.size() -1) cout<<s<<endl;
    else {
        for(int i = indx ; i < s.size() ; ++i){
            swap(s[indx] , s[i]);
            permstring_backtracking(s ,indx+1 );
            swap(s[indx ] , s[i]);

        }
    }

}

int main()
{
    string s; cin>> s;
    permstring_backtracking(s );
}
