package drawer;

import command.*;

import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class DrawCanvas extends Canvas implements Drawable {
    // ø�s��m
    private Color color;    
    //ø�s�I���b�|
    private int radius;     
    // �O��
    private MacroCommand history;
    // �غc�l
    public DrawCanvas(int width, int height, MacroCommand history) {
        setSize(width, height);
        setBackground(Color.white);
        this.history = history;
        init();                             
    }
    // �A��ø�s��ӰO��
    public void paint(Graphics g) {
        history.execute();
    }
    // ��l��
    public void init() {                    
        color = Color.red;                  
        radius = 6;                         
    }                                       
    // ø�s
    public void draw(int x, int y) {
        Graphics g = getGraphics();
        g.setColor(color);
        g.fillOval(x - radius, y - radius, radius * 2, radius * 2);
    }
    public void setColor(Color color) {     
        this.color = color;                 
    }                                       
}
