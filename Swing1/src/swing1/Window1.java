/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package swing1;

/*
 * @author johnvecchio
 */
import javax.swing.*;

public class Window1 extends JFrame{
    private JPanel p;
    private final int MAx = 36;
    private JPanel [] pa;

    public Window1(){
        super();
    }

    public Window1(int x,int y) {
        super();
        setSize(x,y);
        setTitle("Swing Demo");
        setVisible(true);

        JPanel p = new JPanel();
        //for(int i = 0; i < MAX - 1; i++)
          //      pa[i] = new JPanel();

        //p.setLayout(new GridLayout((int)Math.sqrt(MAX)),(int)Math.sqrt(MAX)));
        add(p);

        JButton b = new JButton("Close");
        b.addActionListener(new EndWindowListener());
        b.setSize(200,200);
        add(b);

        repaint();
    }

}
