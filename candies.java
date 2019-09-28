import java.util.ArrayList;
import java.util.Arrays;

class Main {
    public static void main(String[] args) {
        int n = 7;
        int k = 4;
        int[] candies = getCandies(n, k);
        ArrayList<Integer> cands = new ArrayList<>();
        for (int i = 0; i < candies.length; i++)
            cands.add(candies[i]);
        System.out.println(cands.toString());
    }

    private static int [] getCandies(int n, int k) {
        int low = 0;
        int high = n;
        int count = 0;
        int[] arr = new int[k];
        Arrays.fill(arr, 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int sum = (mid * (mid + 1)) / 2;
            if (sum <= n) {
                count = mid / k;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        int i = 0;
        int last = count * n;
        n -= (last * (last + 1)) / 2;
        int term = (count * k) + 1;
        while (n > 0) {
            if (term <= n) {
                arr[i++] = term;
                n -= term;
                term++;
            } else {
                arr[i] += n;
                n = 0;
            }
        }
        for (int j = 0; j < k; j++)
        {
            arr[j] += (count * (i  + 1)) + (k * (count * (count - 1)) / 2);    
        }
        return arr;
    }

}