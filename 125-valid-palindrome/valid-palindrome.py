class Solution(object):
    def isPalindrome(self, s):
        c=""
        for i in range(len(s)):
            if s[i].isalnum():
                c+=s[i].lower()
        if c == c[::-1]:
            return True
        else:
            return False

        