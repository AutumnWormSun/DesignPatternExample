public class UrgentState implements State {
    private static UrgentState singleton = new UrgentState();
    private UrgentState() {                                // �غc�l��private
    }
    public static State getInstance() {                 // ���o�ߤ@������
        return singleton;
    }
    public void doClock(Context context, int hour) {    // �]�w�ɶ�
        // �]�w�ɶ������������B�z
    }                                                                   
    public void doUse(Context context) {                // �ϥΪ��w
        context.callSecurityCenter("���`�G���`�ϥΪ��w�I");
    }
    public void doAlarm(Context context) {              // ĵ�a
        context.callSecurityCenter("ĵ�a(���`)");
    }
    public void doPhone(Context context) {              // �@��q��
        context.callSecurityCenter("�@�몺�q��(���`)");
    }
    public String toString() {                          // ��X�r��
        return "[���`]";
    }
}
