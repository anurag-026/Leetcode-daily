class Solution:
    def getLucky(self, s: str, k: int) -> int:
        # Step 1: Convert string to numbers
        num_str = ''.join(str(ord(c) - ord('a') + 1) for c in s)
        
        # Step 2: Perform k transformations
        for _ in range(k):
            num_str = str(sum(int(digit) for digit in num_str))
        
        return int(num_str)