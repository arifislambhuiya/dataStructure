import java.io.*;
import java.util.*;

class UnionHashMap{
    public static ArrayList<Integer> unionArray(int arr1[],int arr2[]){
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();

        for(int i = 0; i<arr1.length; i++){
            if(map.containsKey(arr1[i])){
                map.put(arr1[i],map.get(arr1[i]) + 1);
            }else{
                map.put(arr1[i],1);
            }
        }
        for(int i = 0;i<arr2.length;i++){
            if(map.containsKey(arr2[i])){
                map.put(arr2[i],map.get(arr2[i])+1);
            }else{
                map.put(arr2[i],1);
            }
        }

        ArrayList<Integer> list = new ArrayList<>();
        for(int i:map.keySet()){
            list.add(i);
        }
        return list;
    }
    public static void main(String[] args) {
        int arr1[] = {1,2,3,4,5,6,7,};
        int arr2[] = {3,2,4,5,6};

        ArrayList<Integer> uni = unionArray(arr1, arr2);
        for(int i : uni) {
            System.out.println(i);
        }
    }
}