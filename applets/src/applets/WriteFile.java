package applets;

import java.io.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.applet.Applet;
import java.net.*;
/*<Applet code="WriteFile" width=300 height=300> </Applet>*/
public class WriteFile extends Applet  {
	 
   Button write = new Button("WriteToFile");
   String st="Type here!";
   
	TextArea area = new TextArea(st,100,130);
	Label label2 = new Label("Hi Sharanya! What do you want to note today?");
	// Font f=new Font("Times of NewRoman",Font.ITALIC,22);
     Font l = new Font("Ebrima",Font.ITALIC,20);
     
   public void init() {
	
	   add(label2);
	   add(write,BorderLayout.CENTER);
      add(area);
       
	 
       area.setFont(l);
	  label2.setFont(l);
      write.addActionListener(new ActionListener () {
         public void actionPerformed(ActionEvent e) { 
            WriteText();
         }
      });
   } 
 
    
     void WriteText() { 
         try {
            String str = "D:\\sahyadri\\Technology!!\\3rd sem\\java\\details.txt";
            
            if(str.equals("")) { 
              JOptionPane.showMessageDialog(null,"Invalid file");
            } else { 
               File f = new File(str);
               if(f.exists()) {
                  BufferedWriter out = new BufferedWriter(new FileWriter(f,true));
                  if(area.getText().equals("")) {
                     JOptionPane.showMessageDialog (null,"Please enter your text!");
                     area.requestFocus();
                  } else {
                     out.write(area.getText());
                     if(f.canWrite()) {
                        JOptionPane.showMessageDialog(null, "Text is written in "+str);
                        
                     
                     } else {
                        JOptionPane.showMessageDialog(null, "Text isn't written in "+str);
                     }
                     out.close();
                  }
               } else {
                  JOptionPane.showMessageDialog (null,"File not found!");
                  
                 
               }
            }
         } catch(Exception x) {
            x.printStackTrace();
         }
      }
   }








 

