/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public IList<int> InorderTraversal(TreeNode root) {
        List<int> ans = new List<int>();
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode current = root;
        if(root!=null)
        {
            while(current != null || stack.Count!=0){
                if(current != null){
                    stack.Push(current);
                    current = current.left;
                }
                else{
                    current = stack.Pop();
                    ans.Add(current.val);
                    current = current.right ;                
                }
            }
        }
        return ans;
    }
}