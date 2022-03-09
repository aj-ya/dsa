class BinaryTreeNode {
  constructor(data = null) {
    this.left = null;
    this.right = null;
    this.data = data;
  }
}

class BinarySearchTree {
  constructor() {
    this.head = null;
  }

  insert(data = null) {
    if (data !== null) {
      if (this.head === null) {
        this.head = new BinaryTreeNode(data);
      } else {
        let found = false;
        let temp = this.head;
        while (!found) {
          if (data > temp.data) {
            if (temp.right !== null) temp = temp.right;
            else {
              found = true;
              temp.right = new BinaryTreeNode(data);
            }
          } else {
            if (temp.left !== null) temp = temp.left;
            else {
              found = true;
              temp.left = new BinaryTreeNode(data);
            }
          }
        }
      }
    }
  }

  inOrder(newhead = this.head) {
    if (newhead != null) {
      this.inOrder(newhead.left);
      console.log(newhead.data);
      this.inOrder(newhead.right);
    }
  }
}

let TreeHead = new BinaryTreeNode(6),
  TreeLeaf1 = new BinaryTreeNode(5),
  TreeLeaf2 = new BinaryTreeNode(7);
TreeHead.left = TreeLeaf1;
TreeHead.right = TreeLeaf2;
console.log(TreeHead);
let BST = new BinarySearchTree();
BST.insert(10);
BST.insert(12);
BST.insert(7);
console.log(BST);
BST.inOrder();
