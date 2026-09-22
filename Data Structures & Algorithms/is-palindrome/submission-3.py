class Solution:
    def isPalindrome(self, s: str) -> bool:
        rev = ''
        for chars in s:
            if chars.isalnum():
                rev += chars.lower()
        return rev == rev[::-1]