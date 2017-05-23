class starter {
		
        public static void main(String args[])
        {
			do
			{
				System.out.println((int)(Math.random() * 100) + 5); //100 is MAX and 5 is MIN
				try
				{
					Thread.sleep(1000);
				} catch(InterruptedException ex) {
					Thread.currentThread().interrupt();
				}
				
			} while (true);
		}
}