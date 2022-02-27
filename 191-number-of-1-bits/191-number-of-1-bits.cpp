class Solution {
public:
    int hammingWeight(uint32_t n)
    {
        int ones=0;
        bitset<32>bt(n);
        return bt.count();
    }
};