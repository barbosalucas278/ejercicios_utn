package Paquete10;

class main10 {

	public static void main(String[] args) {
		int x[][];
		x = new int [3] [3];
		x[0] [0]=1;
		x[0] [1]=2;
		x[0] [2]=3;
		x[1] [0]=2;
		x[1] [1]=2+8;
		x[1] [2]=65;
		x[2] [0]=234;
		x[2] [1]=111;
		x[2] [2]=10;
		for (int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++) 
			{
				System.out.println("x["+i+"]["+j+"] =" +x[i][j]);
			}
		}

	}

}
