public class PrinterProxy implements Printable {
    private String name;            // �W��
    private Printable real;         // �u���H�v
    private String className;       // �u���H�v�����O�W��
    public PrinterProxy(String name, String className) {      // �غc�l
        this.name = name;
        this.className = className;                                                 
    }
    public synchronized void setPrinterName(String name) {  // �R�W
        if (real != null) {
            real.setPrinterName(name);  //�u���H�v�]�n�R�W
        }
        this.name = name;
    }
    public String getPrinterName() {    // ���o�W��
        return name;
    }
    public void print(String string) {  // ��X��e���W
        realize();
        real.print(string);
    }
    private synchronized void realize() {   // ���͡u���H�v
        if (real == null) {
            try {                                                                       
                real = (Printable)Class.forName(className).newInstance();               
                real.setPrinterName(name);                                              
            } catch (ClassNotFoundException e) {                                        
                System.err.println("�䤣�����O " + className + "�C");      
            } catch (Exception e) {                                                     
                e.printStackTrace();                                                    
            }                                                                           
        }
    }
}
