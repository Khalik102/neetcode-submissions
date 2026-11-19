class Solution:
    def findMin(self, nums: List[int]) -> int:
        l = 0
        r = len(nums) - 1

        result = float('inf') # Inifnity

        while l <= r:
            mid = (l + r) // 2
            num = nums[mid] # 6

            result = min(result, num)

            # Check
            if num < nums[r]:
                r = mid - 1
            else:
                l = mid + 1
        
        return result

            

            