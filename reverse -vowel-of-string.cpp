#include <bits/stdc++.h>
using namespace std;


string reverseVowels(string &s) {
        int n= s.size();
        int l=0, r=n-1;
        while(l<r){
            if((s[l] =='a' || s[l] =='e' || s[l] =='i' || s[l] =='o' ||s[l] =='u' ||
            s[l] =='A' ||s[l] =='E' ||s[l] =='I' ||s[l] =='O' ||s[l] =='U') && 
            (s[r] =='a' || s[r] =='e' || s[r] =='i' || s[r] =='o' ||s[r] =='u' ||
            s[r] =='A' ||s[r] =='E' ||s[r] =='I' ||s[r] =='O' ||s[r] =='U')  ){
                char temp =s[l];
                s[l] =s[r];
                s[r] =temp;
                l++;r--; 
            }
            else if( !(s[l] =='a' || s[l] =='e' || s[l] =='i' || s[l] =='o' ||s[l] =='u' ||
            s[l] =='A' ||s[l] =='E' ||s[l] =='I' ||s[l] =='O' ||s[l] =='U')   ){
                l++;
                
            }
            else if( !(s[r] =='a' || s[r] =='e' || s[r] =='i' || s[r] =='o' ||s[r] =='u' ||
            s[r] =='A' ||s[r] =='E' ||s[r] =='I' ||s[r] =='O' ||s[r] =='U')  ){
                r--; 
            }     
        }
        return s;
    }

    
int main(){
    string s= "anurag";
    cout<<reverseVowels(s);

    return 0;

}