import java.util.*;


class IntersectioArr{

    public static ArrayList<Integer> Intersection(int arr1[],int arr2[]){
        TreeSet<Integer> set = new TreeSet<Integer>();
        for(int i : arr1){
            set.add(i);
        }
        ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i: arr2){
            if(set.contains(i) && !list.contains(i)){
                list.add(i);
            }

        }
        Collections.sort(list);
        return list;
    }
    public static void main(String[] args) {
        int arr1 [] = {1,2,4,5,7};
        int arr2 [] = {2,3,4,6,7};

        ArrayList<Integer> result = Intersection(arr1, arr2);
        for(int i:result){
            System.out.println(i+ " ");
        }

    }
}