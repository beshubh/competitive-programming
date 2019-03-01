import java.util.*;

class Main{
    public static void main(String []args){
        Scanner sk = new Scanner(System.in);
        int n1= sk.nextInt();
        int n2 = sk.nextInt();
        int n3 = sk.nextInt();

        int tot = n1 + n2 + n3;
        int [] arr = new int[tot];
        for(int i=0;i<arr.length;i++){
            arr[i] = sk.nextInt();
        }
        ArrayList<Integer> voters = getVoters(arr, tot);
        System.out.println(voters.size());
        for(Integer i: voters){
            System.out.println(i);
        }
    }
    private static ArrayList<Integer> getVoters(int []arr,int n){
        Arrays.sort(arr);
        ArrayList<Integer> voters  = new ArrayList<>();
        for(int i = 0; i < n;){
            int count  =0;
            int j =i;
            while( j < n && arr[j]==arr[i]){
                count++;
                j++;
            }
            if( count >= 2){
                voters.add(arr[i]);
            }
            i = j;
        }
        return voters;
    }
}