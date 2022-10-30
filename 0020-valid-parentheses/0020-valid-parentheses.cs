public class Solution {
    public bool IsValid(string s) {
        List<char> myList = new List<char>();
        foreach(char c in s){
            myList.Add(c);
        }
        int j=myList.Count/2;
        for(int i=0;  i<j; i++){
            for(int k=0; k<myList.Count-1; k++){
                if(isPair(myList[k],myList[k+1])){
                    myList.RemoveAt(k);
                    myList.RemoveAt(k);
                }
            }
        }
        if(myList.Count == 0){
            return true;
        }
        return false;
    }


    public bool isPair(char a, char b)
    {
        if(a=='['&&b==']' || a=='{'&&b=='}' || a=='('&&b==')'){
            return true;
        }
        return false;
    }
}