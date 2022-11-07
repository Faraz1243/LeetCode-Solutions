public class Solution {
    public string[] SortPeople(string[] names, int[] heights) {
        for (int x = 1; x < names.Count(); x++)
        {
            int key = heights[x];
            string key1 = names[x];
            int y = x - 1;
            while (y >= 0 && heights[y] < key)
            {
                heights[y + 1] = heights[y];
                names[y + 1] = names[y];
                y--;
            }
            heights[y + 1] = key;
            names[y + 1] = key1;
        }
        return names;
    }
}