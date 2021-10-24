package ce103;

public class JavaSampleLib {
	
public static String sayHelloTo(String name) {
		
		String output = "";
		
		if(!name.isBlank() && !name.isEmpty()){
			output = "Hello "+name;
		}else {
			output = "Hello There";
		}
		
		System.out.println(output);
		
		return output;
	}
	
	public static int sum(int a,int b)
	{
		int c = 0;
		c = a+b;
		return c;
	}
	
    public int multiply(int a, int b) {
        return a * b;
    }


}
