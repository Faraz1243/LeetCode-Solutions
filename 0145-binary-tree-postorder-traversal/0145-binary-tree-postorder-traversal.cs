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
    public IList<int> PostorderTraversal(TreeNode root) {
        List<int> ans = new List<int>();
        Stack<TreeNode> stack = new Stack<TreeNode>();
        
        if(root!=null){               
            stack.Push(root);
            while(stack.Count!=0){
                TreeNode t = stack.Pop();
                ans.Add(t.val);
                if(t.left!=null){
                    stack.Push(t.left);
                }
                if(t.right!=null){
                    stack.Push(t.right);
                }
            }
            ans.Reverse();
        }
        return ans;
    }
}