class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       for(int i{0}; i<ransomNote.size();i++)
       {
           int counter1=count(ransomNote.begin(),ransomNote.end(),ransomNote[i]);
           int counter2=count(magazine.begin(), magazine.end(),ransomNote[i]);
           if(counter1>counter2)
           {
               return false;
           }
           
       }
        return true;
    }
};