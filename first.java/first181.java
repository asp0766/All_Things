// VerticalTraversal : -


import java.util.*;

class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  public TreeNode(int val) {
    this.val = val;
  }
}

class VerticalTraversal {
  public List<List<Integer>> verticalTraversal(TreeNode node) {
    List<List<Integer>> ans = new ArrayList<>();

    if (node == null) {
      return ans;
    }

    Queue<Map.Entry<TreeNode, Integer>> queue = new ArrayDeque<>();
    Map<Integer, ArrayList<Integer>> map = new HashMap<>();

    queue.offer(new AbstractMap.SimpleEntry<>(node, 0));

    int min = 0;
    int max = 0;

    while (!queue.isEmpty()) {
      Map.Entry<TreeNode, Integer> removed = queue.poll();
      TreeNode curr = removed.getKey();
      int col = removed.getValue();

      if (!map.containsKey(col)) {
        map.put(col, new ArrayList<>());
      }

      map.get(col).add(curr.val);

      min = Math.min(min, col);
      max = Math.max(max, col);

      if (curr.left != null) {
        queue.offer(new AbstractMap.SimpleEntry<>(curr.left, col - 1));
      }

      if (curr.right != null) {
        queue.offer(new AbstractMap.SimpleEntry<>(curr.right, col + 1));
      }
    }

    for (int i = min; i <= max; i++) {
      ans.add(map.get(i));
    }

    return ans;
  }
}

public class first181 {
  public static void main(String[] args) {
    // Sample binary tree:
    //      1
    //     / \
    //    2   3
    //   / \ / \
    //  4  5 6  7

    TreeNode root = new TreeNode(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);
    root.left.left = new TreeNode(4);
    root.left.right = new TreeNode(5);
    root.right.left = new TreeNode(6);
    root.right.right = new TreeNode(7);

    VerticalTraversal vt = new VerticalTraversal();
    List<List<Integer>> result = vt.verticalTraversal(root);

    System.out.println("Vertical Traversal:");
    for (List<Integer> col : result) {
      System.out.println(col);
    }
  }
}
