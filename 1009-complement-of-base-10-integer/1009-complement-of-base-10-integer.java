class Solution {
    public int bitwiseComplement(int n)
    {
        if(n==0) return 1;
         ArrayList<Integer>lst = new ArrayList<>();
        int ans=0;
        
        while(n != 0)
        {
            int rem = n % 2;
            if(rem==1)        lst.add(0);
            else              lst.add(1);
            n = n/2;
        }
        
        for(int i=0; i<lst.size(); i++)
        {
            // System.out.print(lst.get(i)+" ");
            if(lst.get(i) == 1)   ans += Math.pow(2, i);
        }
    return ans;
    }
}