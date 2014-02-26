public class Main {
    public static void main(String[] args) {
        Printable p = new PrinterProxy("Alice", "Printer");                 
        System.out.println("�{�b���W�٬O" + p.getPrinterName() + "�C");
        p.setPrinterName("Bob");
        System.out.println("�{�b���W�٬O" + p.getPrinterName() + "�C");
        p.print("Hello, world.");
    }
}
