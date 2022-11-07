public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        int cookies = 0;
        int children = 0;
        
        for (int x = 1; x < g.Count(); x++)
        {
            int key = g[x];
            int y = x - 1;
            while (y >= 0 && g[y] > key)
            {
                g[y + 1] = g[y];
                y--;
            }
            g[y + 1] = key;
        }
        for (int x = 1; x < s.Count(); x++)
        {
            int key = s[x];
            int y = x - 1;
            while (y >= 0 && s[y] > key)
            {
                s[y + 1] = s[y];
                y--;
            }
            s[y + 1] = key;
        }
        
        int ans = 0;
        while(cookies<s.Count() && children<g.Count())
        {
            if(g[children]<=s[cookies])
            {
                ans++;
                children++;
                cookies++;
            }
            else{
                cookies++;
            }
        }
        
        return ans;
    }
}