package Java_week5_assignment.Q02;

public class TVmain {
    /*
    TV 클래스는 TV의 On/Off, 채널 번호, 볼륨의 크기를 가진다.
    TV 클래스의 객체는 생성시 기본 채널은 10, 볼륨은 5로 지정하며, Off상태를 가진다.
    매소드는 ①TV를 켜면, 채널과 볼륨을 출력하고, ②채널의 변경하면, 변경된 채널번호
    를 출력하고, ③ 볼륨의 크기를 변경하면 변경된 볼륨의 크기를 출력한다.
     */
    public static void main(String[] args) {
        TV myTv = new TV();

        System.out.println("새 TV를 구매했습니다.");
        myTv.ChangeChannel(1);
        myTv.ChangeVolume(2);
        myTv.ChangePower();
        myTv.ChangeChannel(3);
        myTv.ChangeVolume(4);
        myTv.ChangePower();
    }
}
