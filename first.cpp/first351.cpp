// Requirements needed to construct a Unique Binary Tree : - 

/*
1. Inorder + Preorder or Inorder + Postorder Traversal
Inorder (LNR) + Preorder (NLR)
Inorder (LNR) + Postorder (LRN)
Why?
Inorder gives the relative left-right structure.
Preorder/Postorder gives the root-first or root-last order, helping in reconstructing the tree uniquely.
2. Full Binary Tree with Preorder or Postorder
If the tree is Full (each node has 0 or 2 children), then Preorder or Postorder alone is sufficient.
3. BST (Binary Search Tree) with Preorder, Postorder, or Level Order
If it's a BST, any one of these traversals is enough to reconstruct the tree.
4. Special Trees (like Complete or Perfect Trees) with Height Information
For a Complete Binary Tree, Level Order traversal alone is enough.
For a Perfect Binary Tree, Inorder alone is sufficient if height is given.
Not Sufficient:

Preorder + Postorder alone cannot guarantee uniqueness (except for Full Trees).
Only Inorder is not enough (as multiple trees can have the same Inorder traversal). */