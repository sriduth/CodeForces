import java.io.*;

class main

{
	public static void main(String[] args) throws Exception
	{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] bus = 
		{
			"+------------------------+\n",
			"|#.#.#.#.#.#.#.#.#.#.#.|D|)\n",
			"|#.#.#.#.#.#.#.#.#.#.#.|.|\n",
			"|#.......................|\n",
			"|#.#.#.#.#.#.#.#.#.#.#.|.|)\n",
			"+------------------------+"
		};

		int seats = Integer.parseInt(reader.readLine());

		int i = 1;
		while(seats != 0)
		{	
			for(int j=1;j<=4 && seats != 0;j++)
			{
				if(bus[j].charAt(i) == '#')
				{
					StringBuilder seatAlloter = new StringBuilder(bus[j]);	
					seatAlloter.setCharAt(i,'O');
					bus[j] = seatAlloter.toString();
					seats--;
				}

			}
			i += 2;	
		}

		for(i = 0;i<6;i++)
			writer.write(bus[i]);

		writer.flush();
	}
}