public class TextBuilder extends Builder {
    private String buffer = "";                                 // �}�l�b�����إߤ��
    public void makeTitle(String title) {                       // �@���r�榡�����D
        buffer += "==============================\n";               // ����
        buffer += "�y" + title + "�z\n";                            // ���y�z�����D
        buffer += "\n";                                             // �Ŧ�
    }
    public void makeString(String str) {                        // �@���r�榡���r��
        buffer += '��' + str + "\n";                                // �������r��
        buffer += "\n";                                             // �Ŧ�
    }
    public void makeItems(String[] items) {                     // �@���r�榡������
        for (int i = 0; i < items.length; i++) {
            buffer += "�@�E" + items[i] + "\n";                     // ���E������
        }
        buffer += "\n";                                             // �Ŧ�
    }
    public Object getResult() {                                 // ���������
        buffer += "==============================\n";               // ����
        return buffer;
    }
}
