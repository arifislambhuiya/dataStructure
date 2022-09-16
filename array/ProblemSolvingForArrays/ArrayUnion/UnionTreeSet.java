import java.io.*;
import java.util.*;


class UnionTreeSet{

    public static ArrayList<Integer> Unionarray(int arr1[],int arr2[]){
        TreeSet<Integer> set = new TreeSet<Integer>();

        for(int i:arr1){
            set.add(i);
        }

        for(int i:arr2){
            set.add(i);
        }
        ArrayList<Integer> list = new ArrayList<>();
        for(int i:set){
            list.add(i);
        }
        return list;
    }
    public static void main(String[] args) {
        int arr1[] = {1,2,2,2,3};
        int arr2[] = {2,3,3,4,5,5};

        ArrayList<Integer> uni = Unionarray(arr1, arr2);

        for(int i:uni){
            System.out.println(i);
        }

    }
}