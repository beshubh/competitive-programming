import java.util.ArrayList;
import java.util.List;

class Main{
    public static void main(String[] args) {
        int [] A = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2,
            2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4,
            4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6,
            6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
            7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10,
                10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
        int n = A.length;
        ArrayList<Integer> arr = new ArrayList<>();
        for(int i =0; i < n; i++)
        {
            arr.add(A[i]);
        }
        ArrayList<Integer> result = new Main().searchRange(arr, 1);
        System.out.println(result.toString());
            
    }

    public ArrayList<Integer> searchRange(final List<Integer> a, int b) {
        int n = a.size();
        int target = b;
        int i = 0;
        int j = n - 1;
        while(i < j)
        {
            int mid = (i + j) / 2;
            if (a.get(mid) < target) {
                i = mid + 1;
            }
            if (a.get(mid) >= target) {
                j = mid;
            }
        }
        ArrayList<Integer> result = new ArrayList<>();
        if (a.get(i) == target)
        {
            result.add(i);
        }
        else {
            result.add(-1);
            result.add(-1);
            return result;
        }
        i = 0;
        j = n - 1;
        while (i < j)
        {
            int mid = (i + j) / 2 + 1;
            if (a.get(mid) <= target) {
                i = mid;
            }
            if (a.get(mid) > target) {
                j = mid - 1;
            }
        }
        result.add(i);
        System.out.println(result.toString());

        return result;
	}
}