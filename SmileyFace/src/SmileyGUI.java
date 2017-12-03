

/**
 *
 * @author johnvecchio
 */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class SmileyGUI extends JFrame {
    public boolean smile;

    private class FrownAction implements ActionListener {
        public void actionPerformed(ActionEvent e){
            if (smile)
                smile = false;
            else
                smile = true;
            
            repaint();
        }
    }

    public static void main(String[] args) {

        SmileyGUI window = new SmileyGUI();
        window.setVisible(true);
    }


    public SmileyGUI() {
        
        setSize(500, 500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("Smiley GUI");
        setLayout(new BorderLayout());
        getContentPane().setBackground(Color.white);

        JButton frownButton = new JButton("Click to Change Face");
        frownButton.addActionListener(new FrownAction());
        add(frownButton, BorderLayout.SOUTH);
        smile = false;
    }


    public void paint(Graphics g) {
        //super.paint(g);
        g.drawOval(1, 22, 498, 450);
        g.fillOval(150, 150, 50, 50);
        g.fillOval(300, 150, 50, 50);
        
        //g.drawArc(150, 250, 200, 100, 180, 180);

        if (smile)
            g.drawArc(150, 300, 200, 100, 0, 180);
        else
            g.drawArc(150, 250, 200, 100, 180, 180);
    }
}
