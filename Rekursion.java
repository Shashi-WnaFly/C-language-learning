package Orgshashi;
import java.util.Scanner;
class Rekursion{
    static int Recuro(int a){
        return a*Recuro(a-1);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number to get it's factorial.");
        short num = sc.nextShort();
        System.out.println("The factorial of your number is "+Recuro(num));
    }
}