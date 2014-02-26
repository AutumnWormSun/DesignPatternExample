public class Main {
    public static void main(String[] args) {
        Printable p = new PrinterProxy("Alice", "Printer");                 
        System.out.println("現在的名稱是" + p.getPrinterName() + "。");
        p.setPrinterName("Bob");
        System.out.println("現在的名稱是" + p.getPrinterName() + "。");
        p.print("Hello, world.");
    }
}
