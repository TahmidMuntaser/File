# Manacher’s Algorithm in C++ to count the number of palindromic substrings:
The time complexity of the provided code for Manacher’s Algorithm is O(n), where n is the length of the input string.
Detailed Explanation:

1.Transformation Step: The string transformation (inserting # characters and adding sentinel characters ^ and $) takes O(n) time.

2.Main Loop: The main loop iterates over each character of the transformed string (which has a length of approximately 2n + 3). Inside this loop:
    The initial radius is set in constant time.
    The expansion of the palindrome around each center is done in such a way that each character is considered only once in the worst case. 
    This is because the right edge of the palindrome r always moves to the right, ensuring that each comparison is amortized over the entire string.
3.Overall Time Complexity: Combining these, the overall time complexity is O(n) due to the linear time operations in both the transformation step and the main loop.




# Find the longest palindromic substring in a given string
Manacher’s Algorithm in C++ to count the number of palindromic substrings:
    1. Transform the string: Similar to the previous explanation, we insert # between each character and add sentinel characters ^ and $ at the beginning and end. This helps in handling even-length palindromes uniformly.
    2.Initialize variables:
        p is the array that stores the radius of the palindrome centered at each position.
        c is the current center of the rightmost palindrome.
        r is the right edge of this palindrome.
        maxLen stores the length of the longest palindromic substring found so far.
        centerIndex stores the center index of the longest palindromic substring found so far.
    3.Main loop: For each character in the transformed string:
        Calculate the initial radius of the palindrome centered at the current character.
        Try to expand the palindrome centered at the current character as much as possible.
        Update the center and the right edge of the rightmost palindrome if the current palindrome expands beyond the right edge.
        Update the maxLen and centerIndex if a longer palindrome is found.
    4.Extract the longest palindromic substring: Calculate the start index of the longest palindromic substring in the original string and return the substring.

Time Complexity:

The time complexity of this algorithm is O(n), where n is the length of the input string. This is due to the linear time operations in both the transformation step and the main loop.


