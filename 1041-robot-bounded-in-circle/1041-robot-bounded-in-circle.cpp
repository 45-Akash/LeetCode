class Solution {
public:
    bool isRobotBounded(string instructions) 
    {
        char d = 'N';
        int x=0, y=0;
        for(int i=0; i<instructions.size(); i++)
        {
            char mov = instructions[i];
            if(d=='N')
            {
                if(mov=='G')  y++;          
                if(mov=='L')  d='W';
                if(mov=='R')  d='E';
            }
            else if(d=='E')
            {
                if(mov=='G')  x++;
                if(mov=='L')  d='N';
                if(mov=='R')  d='S';
            }
            else if(d=='W')
            {
                if(mov=='G')  x--;
                if(mov=='L')  d='S';
                if(mov=='R')  d='N';
            }
            else if(d=='S')
            {
                if(mov=='G')  y--;        
                if(mov=='L')  d='E';
                if(mov=='R')  d='W';
            }
        }
        
        if((x==0 && y==0) || d != 'N') return true;
        return false;
    }
};