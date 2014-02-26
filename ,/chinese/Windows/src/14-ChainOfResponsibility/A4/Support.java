public abstract class Support {
    private String name;                  // ���D�ѨM�̪��W��
    private Support next;                 // ��e��m
    public Support(String name) {         // ���Ͱ��D�ѨM��
        this.name = name;
    }
    public Support setNext(Support next) {  // �]�w��e��m
        this.next = next;
        return next;
    }
    public final void support(Trouble trouble) {          
        for (Support obj = this; true; obj = obj.next) {
            if (obj.resolve(trouble)) {
                obj.done(trouble);
                break;
            } else if (obj.next == null) {
                obj.fail(trouble);
                break;
            }
        }
    }
    public String toString() {              // �C�L�r��
        return "[" + name + "]";
    }
    protected abstract boolean resolve(Trouble trouble); // �ѨM����k
    protected void done(Trouble trouble) {  // �w�ѨM
        System.out.println(trouble + " is resolved by " + this + ".");
    }
    protected void fail(Trouble trouble) {  // �|���ѨM
        System.out.println(trouble + " cannot be resolved.");
    }
}
