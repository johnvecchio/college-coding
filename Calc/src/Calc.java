/**
 *
 * @author johnvecchio
 */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;


class Calc extends JFrame {

    private static final Font newFONT = new Font("monspaced", Font.PLAIN, 28);

    private JTextField userInput; 

    private boolean   firstNumber = true;
    private String    preOperation  = "=";
    private CalcLogic logic = new CalcLogic(); 

    public static void main(String[] args) {
        try {
            UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
        } catch (Exception unused) {}

        Calc window = new Calc();
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setVisible(true);
        window.setBackground(Color.black);
    }

    //============================================================== constructor
    public Calc() {
        userInput = new JTextField("0", 12);
        userInput.setHorizontalAlignment(JTextField.RIGHT);
        userInput.setFont(newFONT);

        JButton clearButton = new JButton("C");
        clearButton.setFont(newFONT);
        clearButton.addActionListener(new ClearListener());

        ActionListener numListener = new NumListener();

        String buttonOrder = "123456789-0C";
        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(5, 3, 2, 2));
        for (int i = 0; i < buttonOrder.length(); i++) {
            String keyTop = buttonOrder.substring(i, i+1);
            JButton b = new JButton(keyTop);
            if (keyTop.equals("C")) {
                buttonPanel.add(clearButton);
            } else {
                b.addActionListener(numListener);
                b.setFont(newFONT);
                buttonPanel.add(b);
            }
            
        }
       
        ActionListener opListener = new OpListener();

        JPanel opPanel = new JPanel();
        opPanel.setLayout(new GridLayout(5, 1, 2, 2));
        String[] opOrder = {"+", "-", "*", "/", "="};
        for (int i = 0; i < opOrder.length; i++) {
            JButton b = new JButton(opOrder[i]);
            b.addActionListener(opListener);
            b.setFont(newFONT);
            opPanel.add(b);
        }

        JPanel content = new JPanel();
        content.setLayout(new BorderLayout(5, 5));
        content.add(userInput, BorderLayout.NORTH );
        content.add(buttonPanel   , BorderLayout.CENTER);
        content.add(opPanel       , BorderLayout.EAST  );

        buttonPanel.setBackground(Color.black);
        opPanel.setBackground(Color.black);

        

        this.setContentPane(content);
        this.pack();
        this.setTitle("Java Calculator");
        this.setResizable(false);
        this.setLocationRelativeTo(null);
    }


    class OpListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (firstNumber) { 
                actionClear();
                userInput.setText("No op first/use nums");
            } else {
                firstNumber = true;
                try {
                    String displayText = userInput.getText();

                    if (preOperation.equals("=")) {
                        logic.setTotal(displayText);
                    } else if (preOperation.equals("+")) {
                        logic.add(displayText);
                    } else if (preOperation.equals("-")) {
                        logic.subtract(displayText);
                    } else if (preOperation.equals("*")) {
                        logic.multiply(displayText);
                    } else if (preOperation.equals("/")) {
                        logic.divide(displayText);
                    }

                    userInput.setText("" + logic.getTotalString());

                } catch (NumberFormatException ex) {
                    actionClear();
                    userInput.setText("Error");
                }

                preOperation = e.getActionCommand();
            }
        }
    }


    class NumListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            String digit = e.getActionCommand();
            if (firstNumber) {
                userInput.setText(digit);
                firstNumber = false;
            } else {
                userInput.setText(userInput.getText() + digit);
            }
        }
    }

    class ClearListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            actionClear();
        }
    }


    private void actionClear() {
        firstNumber = true;
        userInput.setText("0");
        preOperation  = "=";
        logic.setTotal("0");
    }
}
