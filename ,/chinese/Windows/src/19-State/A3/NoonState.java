public class NoonState implements State {
    private static NoonState singleton = new NoonState();
    private NoonState() {                                // �غc�l��private
    }
    public static State getInstance() {                 // ���o�ߤ@������
        return singleton;
    }
    public void doClock(Context context, int hour) {    // �]�w�ɶ�
        if (hour < 9 || 17 <= hour) {
            context.changeState(NightState.getInstance());
        } else if (9 <= hour && hour < 12 || 13 <= hour && hour < 17) {
            context.changeState(DayState.getInstance());
        }
    }
    public void doUse(Context context) {                // �ϥΪ��w
        context.callSecurityCenter("���`�G���\�ɶ��ϥΪ��w�I");
    }
    public void doAlarm(Context context) {              // ĵ�a
        context.callSecurityCenter("ĵ�a(���\�ɶ�)");
    }
    public void doPhone(Context context) {              // �@��q��
        context.recordLog("���\�ɶ����q�ܿ���");
    }
    public String toString() {                          // ��X�r��
        return "[���\�ɶ�]";
    }
}
