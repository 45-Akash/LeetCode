class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        length=len(temperatures)
        stack = [] #pair :[temp,index]
        ans = [0]*length
        
        for i in range(length):
            while stack and temperatures[i] > stack[-1][0]:
                Temp, Ind = stack.pop()
                ans[Ind] = (i - Ind)
            stack.append([temperatures[i], i])
        return ans
    
                
                
        