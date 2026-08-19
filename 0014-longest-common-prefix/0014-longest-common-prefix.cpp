class Solution {

    //pointers aproach 
public:
    string longestCommonPrefix(vector<string>& strs) {

        int cn= strs[0].size();
        int n=strs.size();
        
        string s="";
        for(int i=0; i<cn;i++){
            char c=strs[0][i];
            int j=1;
           

            while(j<n){
              
                char ch=strs[j][i];

                if(ch!=c){
                    return s;
                    
                }
                j++;
            }

          
                s+=c;
          
            
        } 

        return s;
    }
};