package Paquete5;

class main5 {

	public static void main(String[] args) {
		boolean cond=false;
		int x=0;
		while(cond==false)
		{
			System.out.println("El valor de x es: " +x);
			x=(x*5)+2;
			
			if(x>200) 
			{
			cond=true;	
			}
		}
		

	}

}
