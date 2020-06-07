package Swing;

import javax.swing.*;

import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

public class Reg extends JFrame 
{ 
	
	JTextField jt1, jt2,jt3;
    JLabel lbl;
    JButton jb1;
   // Font l = new Font("Ebrima",Font.ITALIC,20);
	   Reg(){
		   JFrame f = new JFrame("***Registration Form***");
	       f.setSize(400,500); // 400 width and 500 height
	       f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Define the windows closing behaviour
	       f.setVisible(true);
	       f.setLayout(null);
	       JLabel l0 = new JLabel("*Google Registration Form Clone using Java Swings*",JLabel.LEFT);
	       l0.setBounds(10,70,600,40);
	       l0.setFont(new Font("TimesofNewRoman",Font.ITALIC,22));
	       f.add(l0);
	       setVisible(true);
	       setLayout(null);
	       
	       JLabel l01 = new JLabel("* Indicates required fileds",JLabel.LEFT);
	       l01.setBounds(10,120,300,40);
	       l01.setFont(new Font("TimesofNewRoman",Font.ITALIC,22));
	       f.add(l01);
	       setVisible(true);
	       setLayout(null);
	       
	       
	       // Add the component - JLabel
	       JLabel l = new JLabel("Name:*",JLabel.LEFT);
	       l.setBounds(10,210,100,40);
	       l.setFont(new Font("TimesofNewRoman",Font.PLAIN,22));
	       f.add(l); // add the label to the container frame
	       setVisible(true); //make the frame visible
	       setLayout(null);
	       jt1 = new JTextField();
	       jt1.setBounds(10, 250, 250, 40); // setBounds - (X,Y,Width,Height) - X,Y is the top-left corner of the screen
	       f.add(jt1);
	       setVisible(true);
	       setLayout(null);
	       jt1.setFont(new Font("Ebrima",Font.ITALIC,20));
	       
	       JLabel l1 = new JLabel("Email:*",JLabel.LEFT);
	       l1.setFont(new Font("TimesofNewRoman",Font.PLAIN,22));
	       l1.setBounds(10,395,100,40);
	       f.add(l1); // add the label to the container frame
	       setVisible(true);
	       setLayout(null);

	       jt2 = new JTextField();
	       jt2.setBounds(10, 430, 250, 40);
	       f.add(jt2);
	       setVisible(true);
	       setLayout(null);
	       jt2.setFont(new Font("Ebrima",Font.ITALIC,20));
	       
	       
	       JLabel l2 = new JLabel("Mobile No.:*",JLabel.LEFT);
	       l2.setBounds(10,585,140,40);
	       l2.setFont(new Font("TimesofNewRoman",Font.PLAIN,22));
	       f.add(l2); // add the label to the container frame
	       setVisible(true);
	       setLayout(null);

	       jt3 = new JTextField();
	       jt3.setBounds(10, 620, 250, 40);
	       f.add(jt3);
	       setVisible(true);
	       setLayout(null);
	       jt3.setFont(new Font("Ebrima",Font.ITALIC,20));
	       
	       JLabel l3 = new JLabel("You will get the details on to your mobile number as well as email",JLabel.LEFT);
	       l3.setBounds(10,820,500,30);
	       l3.setFont(new Font("TimesofNewRoman",Font.PLAIN,14));
	       f.add(l3); // add the label to the container frame
	       setVisible(true);
	       setLayout(null);
	       

	       jb1 = new JButton("Register");
	       jb1.setBounds(10, 880, 100, 30);
	       f.add(jb1);
	       setVisible(true);
	       setLayout(null);
	       jb1.addActionListener(new ActionListener () {
	           public void actionPerformed(ActionEvent e) { 
	              WriteText();
	           }
	        });
	   }
	public static void main(String[] args) {
	
	       new Reg();
	   
	}
	 void WriteText() { 
         try {
            String str = "D:\\sahyadri\\Technology!!\\3rd sem\\java\\output.txt";
            
            if(str.equals("")) { 
              JOptionPane.showMessageDialog(null,"Invalid destination file");
            } else { 
               File f = new File(str);
               if(f.exists()) {
                  BufferedWriter out = new BufferedWriter(new FileWriter(f,true));
                  if(jt1.getText().equals("") || jt2.getText().equals("") || jt3.getText().equals("")) {
                     JOptionPane.showMessageDialog (null,"Please enter the required fields!");
                     jt1.requestFocus();
                  } else {
                     out.write(jt1.getText());
                     out.write("-");
                     out.write(jt2.getText());
                     out.write("-");
                     out.write(jt3.getText());
                     out.write("\n");
                     if(f.canWrite()) {
                        JOptionPane.showMessageDialog(null, "Succesfully Registered");
                        jt1.setText("");
                        jt2.setText("");
                        jt3.setText("");
                        
                     
                     } else {
                        JOptionPane.showMessageDialog(null, "Sorry some error occured! Check back later ");
                     }
                     out.close();
                  }
               } else {
                  JOptionPane.showMessageDialog (null,"Destination file not found!");
                  
                 
               }
            }
         } catch(Exception x) {
            x.printStackTrace();
         }
      }
}