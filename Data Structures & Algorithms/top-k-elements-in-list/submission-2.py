class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        kvals = Counter(nums).most_common(k)
        freq = []

        for num in kvals:
            freq.append(num[0])
            
        return freq

