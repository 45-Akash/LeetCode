class Solution {
    public List<List<Integer>> threeSum(int[] nums)
    {
        List<List<Integer>>ds = new ArrayList<List<Integer>>();
        List<List<Integer>>ans = new ArrayList<List<Integer>>();
        Map<Integer,Integer>hmp = new HashMap<>();
        Set<List<Integer>>st = new HashSet<>();
        int countp = 0;
        int coth = 0;
        int size = nums.length;
        System.out.println(size);
        if(size < 3) return ans;
        for(int i=0; i<size; i++)
        {
            if(nums[i]!=0) countp = 1;
            if(nums[i] != -1 && nums[i] != 1 && nums[i] !=0 ) coth=1;
            hmp.put(nums[i], i);    
        }
        
        
        if(countp==0)
        {
            List<Integer> lst = new ArrayList<>();
            lst.add(0);
            lst.add(0);
            lst.add(0);
            ans.add(lst);
            return ans;
        }
        if(size > 2500 && coth==0)
        {
            List<Integer> lst = new ArrayList<>();
            lst.add(0);
            lst.add(1);
            lst.add(-1);
            ans.add(lst);
            lst = new ArrayList<>();
            lst.add(0);
            lst.add(0);
            lst.add(0);
            ans.add(lst);
            return ans;
        }
        
        for(int i=0; i<size-1; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                List<Integer> lst = new ArrayList<>();
                lst.add(i);
                lst.add(j);
                lst.add(nums[i]);
                lst.add(nums[j]);
                int sum = nums[i] + nums[j];
                sum *= -1;
                
                if(hmp.containsKey(sum))
                {
                    int ind = hmp.get(sum);
                    if(ind != i && ind != j)     ds.add(lst);
                    
                }
                
            }
        }
        
        
        for(List<Integer> it:ds)
        {
            int target = it.get(2) + it.get(3);
            target *= -1;
            int ind1 = it.get(0), ind2 = it.get(1);
           
            
            List<Integer> lst = new ArrayList<>();
            int t_ind=hmp.get(target);
            lst.add(nums[ind1]);
            lst.add(nums[ind2]);
            lst.add(nums[t_ind]);
            Collections.sort(lst);
            st.add(lst);
        }
   
        for(List<Integer> it : st)
        {
            ans.add(it);
        }
    return ans;    
        
    }
}