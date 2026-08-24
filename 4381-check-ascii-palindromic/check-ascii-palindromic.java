class Solution {
    public boolean isPalindromic(String s) {
        String p="";
        int n=s.length();
        if(n==0) return false;
        for(int i=0;i<n;i++){
            char c=s.charAt(i);
            int ascii=(int)c;
          String binary=String.format("%8s",Integer.toBinaryString(ascii)).replace(' ','0');
            p+=binary;
        }
        int f=0;
        int l=p.length()-1;
        while(f<=l){
            if(p.charAt(f) != p.charAt(l)){
                return false;
            }
            f++;
            l--;
        }
        return true;
    }
}