class Main {
    public static void main(String[] args) {
        int INF = 999999;
        int[][] A = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } };
                int n = A.length;
       
        for (int i = 0; i < n; i++)
        {
            for(int j =0; j < n; j++)
            {
                if (A[i][j] == 0)
                    A[i][j] = INF;
            }
        }
        
        
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    A[i][j] = Integer.min(A[i][j], A[i][k] + A[k][j]);
                }
            }

        }
        StringBuffer s = new StringBuffer();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (A[i][j] == INF) {
                    s.append("INF");
                    s.append("\t");
                } else {
                    s.append(A[i][j]);
                    s.append("\t");
                }

            }
            s.append("\n");
        }
        System.out.println(s.toString());
        System.out.println(A[2][3]);

    }
}