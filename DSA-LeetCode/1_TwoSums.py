class Solution(object):
    def twoSum(self, nums, target):
    
        num_map = {}  
        
        for i, num in enumerate(nums):
            complement = target - num  # Calculate the complement
            if complement in num_map:  # Check if the complement exists in the dictionary
                return [num_map[complement], i]  # Return indices
            num_map[num] = i  # Add the current number and its index to the dictionary
