#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string w1, string w2) {
        int n1 = w1.size();
        int n2 = w2.size();
        int i=0,j=0; 
        string ans = "";
        while( i<n1 && j<n2 ){
            ans += w1[i++] ;
            ans+=  + w2[j++];
        }
        while(i<n1){
            ans += w1[i++];
        }
        while(j<n2){
            ans += w2[j++];
        }
        return ans;
}

int main(){
    string w1 ="abc" , w2 = "de";
    cout<<mergeAlternately(w1,w2);

    return 0;

}