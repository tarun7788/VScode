import java.util.Scanner;

class main {
    public static void main(String[] args) {
        try (Scanner set = new Scanner(System.in)) {
            System.out.println("Enter the first Value:");
            double first = set.nextDouble(); 
            System.out.println("Enter the the operation you want to perform (+, -, /, *, |)");
            char Opr= set.next().charAt(0);             
            System.out.println("Enter the Second Value:");
            double second = set.nextDouble();
            if(second==0){
                System.out.println("Infinity");
            }
            else if (Opr == '+') {
                double z=first+second;
                System.out.println("Addition is: "+z);
            }
            else if(Opr == '-'){
                double z=first-second;
                System.out.println("Subtraction is: "+z);
            }
            else if(Opr=='/'){
                double z=first/second;
                System.out.println("Division is: "+z);
            }
            else if(Opr=='*'){
                double z=first*second;
                System.out.println("Multiplication is: "+z);
            }
            else if(Opr=='|'){
                double z=(first+second)/2;
                System.out.println("Average is:"+z);
            }
        }


    }

    
}
