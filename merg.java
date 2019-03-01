import java.util.Scanner;
class main{
    public static void main(String  [] args){
        Scanner sk = new Scanner(System.in);
        System.out.println("size :");
        int n = sk.nextInt();
        System.out.println("Elements :");
        int [] arr = new int[n];
        for (int i = 0; i < n;i++){
            arr[i]  = sk.nextInt();
        }
        mergesort(arr, 0, n - 1);
        for (int i = 0; i < arr.length;i++){
            System.out.print(arr[i]+" ");
        
        }
        System.out.println();
    }
    private static void mergesort(int []arr,int s, int e) {
        if(s >= e){
            return;
        }
        int mid  = (s + e)/2;
        mergesort(arr, s, mid);
        mergesort(arr, mid+1, e);
        merge(arr,s,e);
    }
    public static void merge(int []arr,int s, int e ) {
        int i = s;
        int mid = (s + e)/2;
        int j = mid + 1;
        int k =0;
        int [] temp = new int[e-s+1];
        while( i <= mid && j <= e){
            if(arr[i] < arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                temp[k++] = arr[j++];
            }
        }
        while( i <= mid){
            temp[k++] = arr[i++];
        }
        while( j<= e){
            temp[k++] = arr[j++];
        }
        for(i = s,k = 0; i <= e; i++,k++){
            arr[i] = temp[k];
        }
    }

}