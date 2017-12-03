/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package birthdayp;
import java.util.HashSet;
import java.util.Random;

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
        Random rand = new Random();

        HashSet birthday = new HashSet();

        int runs = 5000;
        int collideCount = 0;
        int people = 50;

        for(int j = 0; j < runs; j++) {
                birthday.clear();
                for(int i = 0; i < people; i++){
                    birthday.add(Math.abs(rand.nextInt()) % 365 + 1);
                }

                if( birthday.size()< people)
                    collideCount++;
        }

        System.out.println(collideCount + " collisions over " + runs + " runs.");
        double prob = collideCount / 5000.0;
        System.out.println(people + " people equals " + prob + " probability.");
        
    }

}
