/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package arraysearch;
import java.util.ArrayList;

/**
 *
 * @author johnvecchio
 */

import java.util.*;


public class ArraySearch {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ArrayList aList = new ArrayList();
        Scanner s = new Scanner(System.in);
        Scanner a = new Scanner(System.in);
        int input1;
        String input2;
        aList.add(0);
        aList.add(5);
        aList.add(10);
        aList.add(15);
        aList.add(20);
        aList.add("Java");
        aList.add("Programming");
        aList.add("Computer");
        aList.add("Data");
        aList.add("Information");

        //Collections.sort(aList);

        System.out.println("The Array of numbers contains");
        System.out.println("0,5,10,15,20");
        for (int i = 0; i < 5; i++){
            input1 = s.nextInt();
            if (aList.contains(input1))
                System.out.println("True with an index of " + aList.indexOf(input1));
            else
                System.out.println("It is not in the ArrayList");
        }

        

        System.out.println("The Array of strings conatins");
        System.out.println("Java,Programming,Computer,Data,Information");
        for (int j = 0; j < 5; j++){
            input2 = a.nextLine();
            if (aList.contains(input2))
                System.out.println("True with an index of " + aList.indexOf(input2));
            else
                System.out.println("It is not in the ArrayList");
        }
        

    }

}
