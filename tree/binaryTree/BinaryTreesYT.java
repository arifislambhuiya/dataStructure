import java.util.*;

public class BinaryTreesYT{

    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    static class BinaryTrees{
        static int inx = -1;
        public static Node buildTree(int nodes[]){
             inx++; 
             if(nodes[inx] == -1){
                return null;
             }

             Node newNode = new Node(nodes[inx]);
             newNode.left = buildTree(nodes);
             newNode.right = buildTree(nodes);

             return newNode;
        }
        
    }
    public static void preOrder(Node root){
        if(root == null) return;

        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }
    


    public static void inOrder(Node root){
        if(root == null) return;
        inOrder(root.left);
        System.out.print(root.data + " ");
        inOrder(root.right);
    }

    public static void postOrder(Node root){
        if(root == null) return;
        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.data + " ");
    }

    // level order traversal
    public static void levelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);
        while(!q.isEmpty()){
        Node curr =  q.remove();
        if(curr == null){
            System.out.println();
            if(q.isEmpty()){
                break;
            } else{
                q.add(null);
            }
        }else{
            System.out.print(curr.data+ " ");
            if(curr.left != null){
                q.add(curr.left);

            }if(curr.right != null){
                q.add(curr.right);
            }
        }
        }
    }



// height of tree
    public static int height(Node root){
        if(root == null){
            return 0;

        }
        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        return Math.max(leftHeight ,rightHeight) + 1;
    }

    // count of tree
     public static int count(Node root){
        if(root == null){
            return 0;
        }
          int leftTree = count(root.left);
          int rightTree = count(root.right);

          return leftTree + rightTree + 1;
     }

     //sum of tree
     public static int sumOfNodes(Node root){
        if(root == null){
            return 0;
        }
         int leftNode = sumOfNodes(root.left);
         int rightNode = sumOfNodes(root.right);

         return leftNode + rightNode + root.data;
     }

    public static void main(String[] args){
        int nodes [] = {1,2,4,-1,-1 ,5, -1,-1,3,-1,6, -1,-1};
        BinaryTrees tree = new BinaryTrees();
       Node root = tree.buildTree(nodes);
    //    System.out.println(root.data);
    // preOrder(root);
    // System.out.println();
    // inOrder(root);
    // System.out.println();
    // postOrder(root);

    // levelOrder(root);
    // System.out.print(height(root));
    // System.out.print(count(root));
    System.out.print(sumOfNodes(root));
   

    }
}