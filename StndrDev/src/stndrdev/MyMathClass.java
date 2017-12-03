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
public class MyMathClass <T extends Number> {
    private ArrayList<T> myArrayList = new ArrayList<T>(10);
    private ArrayList<T> myList = new ArrayList<T>(10);

    public MyMathClass(ArrayList<T> al){
            myArrayList = al;
            myList = al;
    }

    public double standardDeviation(ArrayList<T> list){
        double n = 0;
        double avg = 0;
        double s = 0;
        double total = 0;
        double answer = 0;
        double counter = 0;
        double d = 0;
        myList = list;

        for(T i : myList) {
            avg = avg + i.doubleValue();
            counter++;
        }

        avg = avg / counter;

        for (T i : myList) {
            n++;
            d = i.doubleValue() - avg;
            s = s +  d * d;
            //System.out.println(s);
        }

        total = (s / (n-1));
        answer = Math.sqrt(total);
        return answer;
    }

}
