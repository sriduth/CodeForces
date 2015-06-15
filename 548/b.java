import java.io.*;

class B {
	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] conf = r.readLine().split(" ");

		int n = Integer.parseInt(conf[0]);
		int m = Integer.parseInt(conf[1]);
		int k = Integer.parseInt(conf[2]);

		int[][] grid = new int[n][m];

		for(int i=0;i<n;i++){
			String[] row = r.readLine().split(" ");

			for(int j=0;j<m;j++) {
				grid[i][j] = Integer.parseInt(row[j]);
			}
		}

		for(int l=0;l<k;l++) {
			String[] cord = r.readLine().split(" ");
			int x = Integer.parseInt(cord[0]);
			int y = Integer.parseInt(cord[1]);

			if(grid[x-1][y-1] == 0)
				grid[x-1][y-1] = 1;
			else
				grid[x-1][y-1] = 0;

			int max = 0;
			for(int i=0;i<n;i++) {
				int len = 0;
				boolean fl = false;
				int alen = 1;
				for(int j=0;j<m-1;j++) {
					if(grid[i][j+1] == 1) {
						fl = true;
						if(grid[i][j] == grid[i][j+1] ){
							alen++;
							fl = true;
						}
						else{
							len = Math.max(len, alen);
							alen = 1;
						}
					}					
				}
				if(len == 1 && !fl)
					len = 0;
				max = Math.max(max, len);
			}

			w.write(Integer.toString(max) + "\n");
		}		
		w.flush();
 	}
}