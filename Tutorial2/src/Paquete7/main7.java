package Paquete7;

class main7 {

	public static void main(String[] args) {
		
		int x=1;
		int anterior=0;
		int temp;
		while (true) 
		{
			System.out.println(x);
			temp=x;
			x=x+anterior;
			anterior=temp;
			if(x>100000000)
				{break;}
				
		}
			
				

	}

}
