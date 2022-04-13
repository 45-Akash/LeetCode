class Solution {
    public int numUniqueEmails(String[] emails)
    {
        Set<String>st = new HashSet<>();
        
        for(int i=0; i<emails.length; i++)
        {
            String mail = emails[i];
            String local="",domain="";
            int len = mail.length(),d_c=0;
            
            int k = 0;
            while(mail.charAt(k)!='@')
            {
                if(mail.charAt(k)=='+') break;
                if(mail.charAt(k)!='.') local += mail.charAt(k);
                k++;
            }
            while(mail.charAt(k)!='@')        k++;
            domain = mail.substring(k, len);
            String E = local+domain;
            // System.out.println(E);
            st.add(E);
        }
        
    return st.size();
    }
}