class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        listmap = {}
        
        for i, value in enumerate(nums):
            diff = target - value
                
            if diff in listmap:
                return(listmap[diff], i)
            listmap[value] = i
        return
