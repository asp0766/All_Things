// KthSmallest : -


import java.util.PriorityQueue;

class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  public TreeNode(int val) {
    this.val = val;
  }
}

class KthSmallest {
  public int kthSmallest(TreeNode root, int k) {
    PriorityQueue<Integer> minHeap = new PriorityQueue<>();
    helper(root, minHeap);

    int ans = 0;
    for (int i = 0; i < k; i++) {
      ans = minHeap.poll();
    }
    return ans;
  }

  private void helper(TreeNode node, PriorityQueue<Integer> minHeap) {
    if (node == null) {
      return;
    }

    helper(node.left, minHeap);
    minHeap.offer(node.val);
    helper(node.right, minHeap);
  }
}

public class first178 {
  public static void main(String[] args) {
    // Create BST:       5
    //                 /   \
    //                3     7
    //               / \     \
    //              2   4     8
    TreeNode root = new TreeNode(5);
    root.left = new TreeNode(3);
    root.right = new TreeNode(7);
    root.left.left = new TreeNode(2);
    root.left.right = new TreeNode(4);
    root.right.right = new TreeNode(8);

    KthSmallest finder = new KthSmallest();
    int k = 3;
    int result = finder.kthSmallest(root, k);

    System.out.println(k + "rd smallest element is: " + result); // Output: 4
  }
}
