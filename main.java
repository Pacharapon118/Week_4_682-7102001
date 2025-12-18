// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;

class Main {
    public static double F2C(double fah){
        double cel = (fah - 32) * 5.0/9.0;
        return cel;
    }
    
    public static double C2F(double cel){
        double fah = (cel * 1.8) + 32.0;
        return cel;
    }
    
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        float F;
        System.out.println("Enter Fahrenheit : ");
        F = myObj.nextFloat();
        System.out.println(F2C(F));
        
        
        
        // if(choice == 1){
        //     System.out.println("Please enter temp(F) : ");
            
        //     System.out.println(F2C(fah));
        // }else if(choice == 2){
        //     System.out.println(F2C(cel));
        // }else{
        //     System.out.println("Invalid choice!!!");
        // }
        
        //System.out.println()
        
        
        System.out.println("Try programiz.pro");
    }
}
