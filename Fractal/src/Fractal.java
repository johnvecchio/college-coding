import java.awt.*;
import javax.swing.*;
import java.util.*;

public class Fractal extends JFrame {

    public static void main(String[] args) {
        Fractal window = new Fractal();
        window.setVisible(true);
    }
    public Fractal(){
        setSize(800, 800);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("Fractal GUI");
        getContentPane().setBackground(Color.white);
        
        repaint();
    }

    public void paint (Graphics g) {
        super.paint(g);
        g.setColor(Color.blue);
       
        Random r = new Random(System.currentTimeMillis());

        // points defining the verticies of a triangle
    	Point [] p = new Point[3];
    	p[0] = new Point(400,0);
    	p[1] = new Point(0,800);
    	p[2] = new Point(800,800);

    	// reference verticies, same as the points in p


    	Point target = null;
    	Point current = null;
    	int [] cnt = {0,0,0};
    	int x=0,y=0;
    	int ran = 0;

    	// try 10 attempts at the gasket
    	for(int k=0; k < 10; k++){

    		// randomly pic current from one of the 3 verticies
	    	ran = Math.abs(r.nextInt(3));// generate 0,1 or 2
	    	current = new Point(p[ran]);

	    	// generate the gasket
	    	for(int i = 0; i < 50000; i++){

	    	   // select one of the 3 verticies as target
	 	    ran = Math.abs(r.nextInt(3));// generate 0,1 or 2
                    cnt[ran]++;
                    target = new Point(p[ran]);

		       // compute the mid point between current and target
                        x = ((int)current.getX()+(int)target.getX())/2;
		        y = ((int)current.getY()+(int)target.getY())/2;

			   // you would draw a pixel at (x,y) to make the gasket.
                           g.drawLine(x, y, x, y);
			   // change current to the new mid point
                        current.setLocation(x,y);
	    	}
    	}
    }


}