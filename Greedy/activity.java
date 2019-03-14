import java.util.*;
class myclass{
    public static void main(String[] args) {
        Scanner sk = new Scanner(System.in);
        int n = sk.nextInt();
        Integer [][]arr = new Integer[n][2];
        for(int i = 0; i < n; i++){
            arr[i][0] = sk.nextInt();
            arr[i][1] = sk.nextInt();
        }
        Arrays.sort(arr,new Comparator<Integer[]>() {
            public int compare(Integer [] a, Integer [] b){
                return Integer.compare(a[1],b[1]);
            }
        });
        int act = 1;
        int tracker = arr[0][1];
        for(int i = 0; i < n - 1; i++){
            if(tracker < arr[ i + 1][0]){
                tracker = arr[ i + 1][1];
                act++;
            }
        }
        System.out.println(act);
        for(int i = 0; i < n; i++){
            System.out.println(arr[i][0] + " " + arr[i][1]);
        }
        sk.close();
    }
}