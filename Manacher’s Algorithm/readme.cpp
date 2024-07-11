Manacher’s Algorithm in C++ to count the number of palindromic substrings:
The time complexity of the provided code for Manacher’s Algorithm is O(n), where n is the length of the input string.
Detailed Explanation:

1.Transformation Step: The string transformation (inserting # characters and adding sentinel characters ^ and $) takes O(n) time.

2.Main Loop: The main loop iterates over each character of the transformed string (which has a length of approximately 2n + 3). Inside this loop:
    The initial radius is set in constant time.
    The expansion of the palindrome around each center is done in such a way that each character is considered only once in the worst case. 
    This is because the right edge of the palindrome r always moves to the right, ensuring that each comparison is amortized over the entire string.
3.Overall Time Complexity: Combining these, the overall time complexity is O(n) due to the linear time operations in both the transformation step and the main loop.

