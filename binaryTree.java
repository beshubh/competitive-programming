import java.util.ArrayList;

class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode parent;

    public TreeNode(int val, TreeNode parent) {
        this.val = val;
        this.left = null;
        this.right = null;
        this.parent = parent;
    }
}

class Tree {
    TreeNode root;
}

class Solution {
    // computing Lowest common ancestor
    // public int lca(TreeNode A, int B, int C) {
    // boolean a = search(A, new TreeNode(B));
    // boolean b = search(A, new TreeNode(C));
    // System.out.println(a + " " + b);
    // if (a && b) {
    // TreeNode ans = findLowestCommonAncestor(A, new TreeNode(B), new TreeNode(C));
    // return ans.val;
    // }
    // return -1;
    // }

    // public boolean search(TreeNode root, TreeNode node) {
    // if (root == null)
    // return false;
    // if (root.val == node.val) {
    // return true;
    // }
    // boolean left = search(root.left, node);
    // boolean right = search(root.right, node);
    // if (left || right) {
    // return true;
    // }
    // return false;
    // }

    // public TreeNode findLowestCommonAncestor(TreeNode root, TreeNode n1, TreeNode
    // n2) {
    // if (root == null)
    // return null;
    // if (root.val == n1.val || root.val == n2.val) {
    // return root;
    // }
    // TreeNode left = findLowestCommonAncestor(root.left, n1, n2);
    // TreeNode right = findLowestCommonAncestor(root.right, n1, n2);
    // if (left != null && right != null) {
    // return root;
    // }
    // if (left == null && right == null)
    // return null;

    // return left != null ? left : right;
    // }

    TreeNode rightSibling(TreeNode node, int level) {
        if (node == null || node.parent == null) {
            return null;
        }
        while ((node.parent.right == node) || (node.parent.right == null && node.parent.left == node)) {
            node = node.parent;
            level--;
        }
        node = node.parent.right;
        while (level < 0) {
            if (node.left != null) {
                node = node.left;
            } else if (node.right != null) {
                node = node.right;
            } else {
                break;
            }
            level++;
        }
        if (level == 0) {
            return node;
        }
        return rightSibling(node, level);
    }

    void inOrder(TreeNode root, ArrayList<Integer> inorder) {
        if(root == null)
        {
            return;
        }
        inOrder(root.left, inorder);
        inorder.add(root.val);
        inOrder(root.right,inorder);
    }
}

    

class Main {
    public static void main(String[] args) {
        TreeNode root = new TreeNode(1, null);
        root.left = new TreeNode(2, root);
        root.right = new TreeNode(3, root);
        root.left.left = new TreeNode(4, root.left);
        root.left.right = new TreeNode(6, root.left);
        root.left.left.left = new TreeNode(7, root.left.left);
        root.left.left.left.left = new TreeNode(10, root.left.left.left);
        root.left.right.right = new TreeNode(9, root.left.right);
        root.right.right = new TreeNode(5, root.right);
        root.right.right.right = new TreeNode(8, root.right.right);
        root.right.right.right.right = new TreeNode(12, root.right.right.right);
        TreeNode rightSibling = new Solution().rightSibling(root.right.right, 0);
        if (rightSibling != null) {
            System.out.println(rightSibling.val);
        }
        else {
            System.out.println("not found");
        }
    }

}