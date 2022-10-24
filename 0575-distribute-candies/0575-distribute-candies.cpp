class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> dict;
    
        for(int i=0; i<candyType.size(); i++){
            dict[candyType[i]] = candyType[i];
        }
        if(candyType.size()/2>dict.size()){
            return dict.size();
        }
        return candyType.size()/2;
    }
};