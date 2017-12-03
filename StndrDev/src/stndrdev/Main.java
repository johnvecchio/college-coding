/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package stndrdev;
import java.util.ArrayList;
/**
 *
 * @author johnvecchio
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Standard Deviation Double");
        double aOut1 = 0.0;
        double aOut2 = 0.0;

        ArrayList<Double> ArrayNmbr1 = new ArrayList<Double>(10);
        ArrayList<Double> ArrayNmbr2 = new ArrayList<Double>(10);

        for (double i = 1; i <= 10; i++) {
                ArrayNmbr1.add(new Double(i));
        }

        for (double i = 11; i <= 20; i++) {
                ArrayNmbr2.add(new Double(i));
        }

        MyMathClass<Double> myArray1 = new MyMathClass<Double>(ArrayNmbr1);
        MyMathClass<Double> myArray2 = new MyMathClass<Double>(ArrayNmbr2);

        aOut1 = myArray1.standardDeviation(ArrayNmbr1);
        System.out.println("\nanswer for first array = " + aOut1);
        aOut2 = myArray2.standardDeviation(ArrayNmbr2);
        System.out.println("answer for second array = " + aOut2);

        ///////
        System.out.println("\nStandard Deviation Int");
        double aOut3 = 0;
        double aOut4 = 0;

        ArrayList<Integer> ArrayNmbr3 = new ArrayList<Integer>(10);
        ArrayList<Integer> ArrayNmbr4 = new ArrayList<Integer>(10);

        for (int i = 1; i <= 10; i++) {
                ArrayNmbr3.add(new Integer(i));
        }

        for (int i = 11; i <= 20; i++) {
                ArrayNmbr4.add(new Integer(i));
        }

        MyMathClass<Integer> myArray3 = new MyMathClass<Integer>(ArrayNmbr3);
        MyMathClass<Integer> myArray4 = new MyMathClass<Integer>(ArrayNmbr4);

        aOut3 = myArray3.standardDeviation(ArrayNmbr3);
        System.out.println("\nanswer for first array = " + aOut3);
        aOut4 = myArray4.standardDeviation(ArrayNmbr4);
        System.out.println("answer for second array = " + aOut4);

    }
}
