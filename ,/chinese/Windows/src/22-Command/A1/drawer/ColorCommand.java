package drawer;

import command.Command;
import java.awt.Color;

public class ColorCommand implements Command {
    // ø�s��H
    protected Drawable drawable;
    // ø�s��m
    private Color color;
    // �غc�l
    public ColorCommand(Drawable drawable, Color color) {
        this.drawable = drawable;
        this.color = color;
    }
    // ����
    public void execute() {
        drawable.setColor(color);
    }
}
