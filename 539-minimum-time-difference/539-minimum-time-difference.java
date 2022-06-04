class Solution {
    public int findMinDifference(List<String> timePoints)
    {
        ArrayList<Integer>lst1 = new ArrayList<>();
        ArrayList<Integer>lst2 = new ArrayList<>();
        
        for(String it:timePoints)
        {
            int hours = Integer.parseInt(it.substring(0,2));
            int minutes = Integer.parseInt(it.substring(3,5));
            
            int total = hours*60 + minutes;
            
            if(total <= 720)    lst1.add(total);
            else                lst2.add(total);
            
        }
        
        Collections.sort(lst1);
        Collections.sort(lst2);
        int mini = Integer.MAX_VALUE;
        // System.out.println(lst.size());
        
        
        for(int i=0; i<lst1.size()-1; i++)
        {
            int diff1 = lst1.get(i+1)-lst1.get(i);
            int diff2 = (Math.abs(lst1.get(i))-0)+(Math.abs(1440-lst1.get(i+1)));

            int diff = Math.min(diff1,diff2);
            mini = Math.min(mini, diff);   
        }
        
        for(int i=0; i<lst2.size()-1; i++)
        {
            int diff1 = lst2.get(i+1)-lst2.get(i);
            int diff2 = (Math.abs(lst2.get(i))-0)+(Math.abs(1440-lst2.get(i+1)));

            int diff = Math.min(diff1,diff2);
            mini = Math.min(mini, diff);   
        }
        
        for(int i=0; i<lst1.size(); i++)
        {
            for(int j=0; j<lst2.size(); j++)
            {
                int diff1 = lst2.get(j)-lst1.get(i);
                int diff2 = (Math.abs(lst1.get(i))-0)+(Math.abs(1440-lst2.get(j)));

                int diff = Math.min(diff1,diff2);
                mini = Math.min(mini, diff);   
            }
        }
    return mini;
    }
}