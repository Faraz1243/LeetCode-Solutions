class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<char>  mySet;
        
        
        unordered_map<char, int> note;
    
        for(int i=0; i<ransomNote.size(); i++){
            if(note.count(ransomNote[i])==0){
                note[ransomNote[i]] = ransomNote[i];
                    mySet.push_back(ransomNote[i]);
            }
            else{
                note[ransomNote[i]] = note[ransomNote[i]]+1;
            }
        }
        
        unordered_map<int, int> data;

        for(int i=0; i<magazine.size(); i++){
            if(data.count(magazine[i])==0){
                data[magazine[i]] = magazine[i];
                mySet.push_back(magazine[i]);
            }
            else{
                data[magazine[i]] = data[magazine[i]]+1;
            }
        }
        
        for (int i=0; i<mySet.size(); i++){
                if(data[mySet[i]]<note[mySet[i]]){
                return false;
            }
        }
        return true;
    }
};

