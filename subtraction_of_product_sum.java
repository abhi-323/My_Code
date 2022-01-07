import java.util.Scanner;
public class subtraction_of_product_sum {
    public static void main(String[] args) {
    
        Scanner sc=new Scanner(System.in);
        
            System.out.println("Enter No ");
            int num=sc.nextInt();
            
            System.out.println(sub(num));        

    }


  
    public static int sub(int n)
    {
        int sum=0;
        int product=1;
    
        while(n>0)
        {
            sum+=n%10;
            product*=n%10;
            n/=10;
        }
        System.out.println("sum= "+sum);
        System.out.println("product= "+product);
        System.out.print("Difference of Product and Sum= ");
        return product-sum;
    }
}