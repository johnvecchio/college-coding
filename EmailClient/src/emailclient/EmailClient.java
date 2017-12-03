/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package emailclient;

/**
 *
 * @author johnvecchio
 */

import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;


public class EmailClient extends JPanel {
    protected JTextField textFieldCC, textFieldTo, textFieldBCC;
    protected JTextArea textArea;
    protected JLabel toLabel, ccLabel, bccLabel, msgLabel;
    private final static String newline = "\n";

    public EmailClient() {
        super(new GridBagLayout());

        //The CC to the email
        toLabel = new JLabel("To:");
        textFieldTo = new JTextField(20);
        ccLabel = new JLabel("CC:");
        textFieldCC = new JTextField(20);
        bccLabel = new JLabel("BCC:");
        textFieldBCC = new JTextField(20);
        msgLabel = new JLabel("Message:");

        //The Message to the Email
        textArea = new JTextArea(8, 20);
        JScrollPane scrollPane = new JScrollPane(textArea);

        GridBagConstraints c = new GridBagConstraints();
        c.gridwidth = GridBagConstraints.REMAINDER;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.fill = GridBagConstraints.BOTH;
        c.weightx = 1.0;
        c.weighty = 1.0;

        add(toLabel, c);
        add(textFieldTo, c);
        add(ccLabel, c);
        add(textFieldCC, c);
        add(bccLabel, c);
        add(textFieldBCC, c);
        add(msgLabel, c);
        add(scrollPane, c);
        

        //The Send button to the email
        JButton sendButton = new JButton("SEND");
        sendButton.addActionListener(new sendAction());
        add(sendButton);
    }

    private class sendAction implements ActionListener {
        public void actionPerformed(ActionEvent e){
            /* When send is pressed it c
             * the actionListener captures the text
             * from both feilds and prints them out
             * as strings in the console
             */
            String text = textFieldCC.getText();
            System.out.println(text + newline);
            text = textFieldTo.getText();
            System.out.println(text + newline);
            text = textFieldBCC.getText();
            System.out.println(text + newline);
            String message = textArea.getText();
            System.out.println(message + newline);
        }
    }

    private static void createAndShowGUI() {
        //Create and set up the window.
        JFrame frame = new JFrame("Email Client");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        //Add contents to the window.
        frame.add(new EmailClient());

        //Display the window.
        frame.pack();
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        //Schedule a job for the event dispatch thread:
        //creating and showing this application's GUI.
        javax.swing.SwingUtilities.invokeLater(new Runnable() {
            public void run() {createAndShowGUI();}
        });
    }
}

    

