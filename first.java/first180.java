// TwoSum : -


import java.util.HashSet;

class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  public TreeNode(int val) {
    this.val = val;
  }
}

class TwoSum {
  public boolean findTarget(TreeNode root, int k) {
    HashSet<Integer> set = new HashSet<>();
    return helper(root, k, set);
  }

  private boolean helper(TreeNode node, int k, HashSet<Integer> set) {
    if (node == null) {
      return false;
    }

    if (set.contains(k - node.val)) {
      return true;
    }

    set.add(node.val);
    return helper(node.left, k, set) || helper(node.right, k, set);
  }
}

public class first180 {
  public static void main(String[] args) {
    // Sample BST:
    //       5
    //      / \
    //     3   7
    //    / \   \
    //   2   4   8

    TreeNode root = new TreeNode(5);
    root.left = new TreeNode(3);
    root.right = new TreeNode(7);
    root.left.left = new TreeNode(2);
    root.left.right = new TreeNode(4);
    root.right.right = new TreeNode(8);

    TwoSum finder = new TwoSum();

    int target = 9;
    boolean result = finder.findTarget(root, target);

    System.out.println("Does the BST have two elements that sum to " + target + "? " + result);
  }
}
