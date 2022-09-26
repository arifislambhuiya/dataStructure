import java.util.*;
public class LinkedList2 {
    



   public static void main(String args[]) {
      LinkedList<String> list = new LinkedList<String>();
 
      list.addFirst("shradha");
      list.addFirst("name");
      list.addFirst("my");
      System.out.println(list);
     
      list.add(2, "is");
      System.out.println(list);
   }
}
