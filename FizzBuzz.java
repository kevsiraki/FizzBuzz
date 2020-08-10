class FizzBuzz {
	public static void main(String args[]) {
		FizzBuzz(100);
	}
   
   public static void FizzBuzz(int i) {
      if(i==0) return;
      else {
         FizzBuzz(i-1);
         if(i%3==0&&i%5==0) System.out.println("FizzBuzz");
			else if(i%3==0) System.out.println("Fizz");
			else if(i%5==0) System.out.println("Buzz");
			else System.out.println(i);
      }
   }
}