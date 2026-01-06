// Doubly Linked List : -


class LLNode {
    int val;
    LLNode prev;
    LLNode next;
  
    public LLNode(int val) {
      this.val = val;
    }
  }
  
  class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
  
    public TreeNode(int val) {
      this.val = val;
    }
  }
  
  class DoubleLinkedList {
    LLNode head;
    LLNode tail;
  
    public LLNode convert(TreeNode root) {
      if (root == null) {
        return null;
      }
  
      helper(root);
      return head;
    }
  
    private void helper(TreeNode node) {
      if (node == null) {
        return;
      }
  
      helper(node.left);
  
      LLNode newNode = new LLNode(node.val);
  
      if (head == null) {
        head = newNode;
        tail = newNode;
      } else {
        tail.next = newNode;
        newNode.prev = tail;
        tail = newNode;
      }
  
      helper(node.right);
    }
  
    public void displayList() {
      LLNode temp = head;
      while (temp != null) {
        System.out.print(temp.val + " ");
        temp = temp.next;
      }
      System.out.println();
    }
  }
  
  public class first177 {
    public static void main(String[] args) {
      // Create a sample BST
      TreeNode root = new TreeNode(10);
      root.left = new TreeNode(5);
      root.right = new TreeNode(15);
      root.left.left = new TreeNode(2);
      root.left.right = new TreeNode(7);
      root.right.right = new TreeNode(20);
  
      // Convert to Doubly Linked List
      DoubleLinkedList dll = new DoubleLinkedList();
      dll.convert(root);
  
      // Display the linked list
      System.out.println("Doubly Linked List from BST:");
      dll.displayList(); // Expected: 2 5 7 10 15 20
    }
  }
  