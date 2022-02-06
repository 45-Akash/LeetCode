class Bitset {
public:
    vector<int>vec;
    int count_0 = 0;
    int count_1 = 0;
    int n;
    int f=0;
    Bitset(int size)
    {
        vec.resize(size);
        count_0 = size;
        n=size;
    }
    
    void fix(int idx)
    {
        if(f==0)
        {
            if(vec[idx] == 0)
            {
                vec[idx]=1;
                count_1++;
                count_0--;
            }
        }
        else
        {
            if(vec[idx]==1)
            {
                vec[idx]=0;
                count_1++;
                count_0--;
            }
        }
            
    }
    
    void unfix(int idx) {
        if(f==0)
        {
            if(vec[idx] == 1)
            {
                vec[idx] = 0;
                count_0++;
                count_1--;
            }
        }
        else
        {
            if(vec[idx] == 0)
            {
                vec[idx]=1;
                count_0++;
                count_1--;
            }
        }
    }
    
    void flip()
    {
        if(f==0)       f=1;
        else           f=0;
        
        int temp = count_0;
        count_0 = count_1;
        count_1 = temp;
    }
    
    bool all() 
    {
        if(count_1==n)       return true;
        return false;
    }
    
    bool one()
    {
        if(count_1 >=1)         return true;
        return false;
    }
    
    int count()
    {
        return count_1;
    }
    
    string toString()
    {
        string str = "";
        if(f==1)
        {
            for(int i=0; i<vec.size(); i++)
            {
                string ch = to_string(vec[i]);
                if(ch=="1")    ch="0";
                else           ch="1";
                str += ch;
            }
        }
        else
        {
            for(int i=0; i<vec.size(); i++)
            {
                string ch = to_string(vec[i]);
                str += ch;
            }
        }
    return str;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */