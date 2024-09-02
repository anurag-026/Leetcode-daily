class Solution {
    public boolean isSubsequence(String s, String t) {
        int n= s.length();
        int m= t.length();
        int i= 0;
        for(int j=0; j< m; j++){
            if(i == n) return true; 
            if(t.charAt(j) == s.charAt(i)){ 
                i++;
            }
        }
        return i == n;
    }
}