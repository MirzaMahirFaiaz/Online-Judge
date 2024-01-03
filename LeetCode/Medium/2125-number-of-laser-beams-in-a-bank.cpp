//@author Mirza Mahir Faiaz, Dept of CSE, AUST
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prvc=0;
        int crnc=0;
        int ans=0;
        for(int i=0; i<bank.size();i++){
            crnc=0;
            for(int j=0; j<bank[i].size();j++){
                if(bank[i][j]=='1')
                crnc++;
            }
            ans+=crnc*prvc;
            if(crnc!=0)
            prvc=crnc;
        }
        return ans;
    }
};
