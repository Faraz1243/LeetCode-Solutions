class Solution {
public:
    string frequencySort(string s) {
        int values[75]={0};
        char alphabets[75] =    {
            '0','1','2','3','4','5','6','7','8','9',
            '!','!','!','!','!','!','!',
            'A','B','C','D','E','F','G','H',
            'I','J','K','L','M','N','O','P',
            'Q','R','S','T','U','V','W','X',
            'Y','Z','!','!','!','!','!','!',
            'a','b','c','d','e','f','g','h',
             'i','j','k','l','m','n','o','p',
             'q','r','s','t','u','v','w','x',
             'y','z'
                                };
        for(char c: s)
        {
            int idx = int(c);
            idx-=48;
            values[idx]++;
        }
        
        for (int i = 0; i < 75; i++)
        {
            for (int j = 0; j < 75; j++)
            {
                if (values[i] > values[j])
                {
                    int temp = values[i];
                    values[i] = values[j];
                    values[j] = temp;

                    char c = alphabets[i];
                    alphabets[i] = alphabets[j];
                    alphabets[j]= c;
                }
            }
        }
        string ans ="";
        for(int i=0; i<75; i++)
        {
            if(values[i]==0){continue;}
            char character = alphabets[i];
            int count = values[i];
            for(int j=0; j<count ; j++){
                ans+=character;
            }
        }
        return ans;
    }
};