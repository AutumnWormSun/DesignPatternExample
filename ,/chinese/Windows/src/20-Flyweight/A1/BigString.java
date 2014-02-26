public class BigString {
    // �j����r�v���}�C
    private BigChar[] bigchars;
    // �غc�l
    public BigString(String string) {
        init_shared(string);
    }
    // �غc�l
    public BigString(String string, boolean shared) {
        if (shared) {
            init_shared(string);
        } else {
            init_unshared(string);
        }
    }
    // �@�ΥB��l��
    private void init_shared(String string) {
        bigchars = new BigChar[string.length()];
        BigCharFactory factory = BigCharFactory.getInstance();
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i] = factory.getBigChar(string.charAt(i)); 
        }
    }
    // ���@�Ϊ���l��
    private void init_unshared(String string) {
        bigchars = new BigChar[string.length()];
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i] = new BigChar(string.charAt(i));    
        }
    }
    // ��X��e���W
    public void print() {
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i].print();
        }
    }
}
