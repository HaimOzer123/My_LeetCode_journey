class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):  #eliminate first not anagram words by they lenth.
            return False
        
        countS , countT = {} , {}  # create a hash maps 

        for i in range(len(s)): # create a loop to count each leatter in each word
            countS[s[i]] = 1 + countS.get(s[i],0) # use get so we can find the end of the word as 0 
            countT[t[i]] = 1 + countT.get(t[i],0) # same in the string t
        for c in countS:
            if countS[c] != countT.get(c,0): # test the two string 
                return False
        return True