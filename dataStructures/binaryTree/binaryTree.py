class BinaryTreeNode:
    def __init__(self,data):
        self.left = None
        self.right = None
        self.data = data

class BinarySearchTree :
    def __init__(self) :
        self.head = None
    def insert(self,data):
        if(data!=None):
            if (self.head == None):
                self.head = BinaryTreeNode(data)
            else:
                found = False
                temp = self.head
                while (found==False):
                    if (data > temp.data) :
                        if (temp.right != None) :
                            temp = temp.right
                        else:
                            found = True
                            temp.right =BinaryTreeNode(data)
                    else:
                        if (temp.left != None):
                            temp = temp.left
                        else:
                            found = True
                            temp.left = BinaryTreeNode(data)

TreeHead =  BinaryTreeNode(6)
TreeLeaf1 =  BinaryTreeNode(5)
TreeLeaf2 =  BinaryTreeNode(7)
TreeHead.left = TreeLeaf1
TreeHead.right = TreeLeaf2
print(TreeHead)
BST =  BinarySearchTree()
BST.insert(10)
BST.insert(12)
BST.insert(7)
print(BST)
