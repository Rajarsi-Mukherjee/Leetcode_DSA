class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        pos=0
        for i in range(len(s)):
            found=False;
            for j in range(pos,len(t)):
                if s[i]==t[j]:
                 found=True
                 pos=j+1;
                 break;
            if not found:
                return False
        return True