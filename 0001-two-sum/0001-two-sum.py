class Solution(object):
    def twoSum( self,nums, target):
        map ={}
        for i in range (len(nums)):
            compliment = target -nums[i]
            if compliment in map:
                return [map[compliment],i]
            map[nums[i]]=i
        return[]