# You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
# The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any 
# leading 0's.
# Increment the large integer by one and return the resulting array of digits.

# Example 1:
# Input: digits = [1,2,3]
# Output: [1,2,4]
# Explanation: The array represents the integer 123.
# Incrementing by one gives 123 + 1 = 124.
# Thus, the result should be [1,2,4].

def plusOne(digits):
    n = len(digits)
    carry = 1

    for i in range(n-1, -1, -1):
        new_digit = digits[i] + carry
        if new_digit < 10:
            digits[i] = new_digit
            carry = 0
            break
        else:
            digits[i] = 0
            carry = 1
    
    if carry == 1:
        digits.insert(0, 1)
    return digits


digits1 = [1, 2, 3]
print("Result:", plusOne(digits1))  # Output: [1, 2, 4]

digits2 = [9, 9, 9]
print("Result:", plusOne(digits2))  # Output: [1, 0, 0, 0]
