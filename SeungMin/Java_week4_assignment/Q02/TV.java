package Java_week4_assignment.Q02;

public class TV {
     private int channel = 10;
     private int volume = 5;
     private boolean power = false;

     void ChangeChannel(int n) {
         if (power) {
             channel = n;
             System.out.println("채널을 " + channel + "으로 변경했습니다.");
         } else {
             System.out.println("TV가 꺼져있어 채널을 변경할 수 없습니다.");
         }
     }

    void ChangeVolume(int n) {
         if (power) {
             volume = n;
             System.out.println("소리를 " + volume + "으로 변경했습니다.");
         } else {
             System.out.println("TV가 꺼져있어 소리를 변경할 수 없습니다.");
         }
    }

    void ChangePower() {
         if (power) {
             power = false;
             System.out.println("- TV가 꺼졌습니다.");
         }
         else {
             power = true;
             System.out.println("- TV가 켜졌습니다.");
         }
    }
}
