class Solution {
    
    public void solve(int ind, int size, int[] arr, int T, List<Integer>list, List<List<Integer>>res)
    {
        if(ind == size)
        {
            if(T == 0)
            {
                List<Integer>l = new ArrayList<>(list);
                res.add(l);
            }
        return;
        }
        
        if(arr[ind] <= T)
        {
            list.add(arr[ind]);
            solve(ind, size, arr, T-arr[ind], list, res);
            
            list.remove(list.size()-1);
        }
        
        solve(ind+1, size, arr, T, list, res);
        
        return;
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target)
    {
        int size = candidates.length;
        
        List<List<Integer>>Csum = new ArrayList<>();
        
        solve(0, size, candidates, target, new ArrayList<Integer>(), Csum);
        
        return Csum;
    }
}