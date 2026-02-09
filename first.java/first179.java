// TwoNodeSwap : -

class Node {
  int val;
  Node left;
  Node right;

  public Node(int val) {
    this.val = val;
  }
}

class TwoNodeSwap {
  Node first;
  Node second;
  Node prev;

  public void helper(Node root) {
    iot(root);

    // Swap the misplaced nodes
    int temp = first.val;
    first.val = second.val;
    second.val = temp;
  }

  private void iot(Node node) {
    if (node == null) {
      return;
    }

    iot(node.left);

    if (prev != null && prev.val > node.val) {
      if (first == null) {
        first = prev;
      }
      second = node;
    }

    prev = node;

    iot(node.right);
  }

  public void printIOT(Node node) {
    if (node == null) {
      return;
    }
    printIOT(node.left);
    System.out.print(node.val + " ");
    printIOT(node.right);
  }
}

public class first179 {
  public static void main(String[] args) {
    // Construct BST with two nodes swapped: should be 1 2 3 4 5
    // but let's swap 2 and 4 to make it invalid
    Node root = new Node(3);
    root.left = new Node(1);
    root.right = new Node(4);
    root.right.left = new Node(2); // should be 2 on left of 3
    root.left.right = new Node(5); // should be 5 on right of 4

    TwoNodeSwap solver = new TwoNodeSwap();

    System.out.println("Before correction (in-order):");
    solver.printIOT(root);
    System.out.println();

    solver.helper(root); // Fix the BST

    System.out.println("After correction (in-order):");
    solver.printIOT(root);
    System.out.println();
  }
}
