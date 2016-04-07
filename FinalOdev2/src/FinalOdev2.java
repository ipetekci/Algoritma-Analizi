
import java.util.Random;
import java.util.Scanner;

public class FinalOdev2 {
    
    private static int x;
    
    private static int toplam = 0;
    
    public static void main(String[] args){
        Scanner giris = new Scanner(System.in);
        
        int i, j;
        System.out.println("satır sayisi giriniz");
        int s=giris.nextInt();
        int[][] satisTablosu = new int[s][100];

        Random r = new Random();
                
        for (i = 0; i < s; i++) {
            for (j = 0; j < 100; j++) {
                x = r.nextInt(2);
                satisTablosu[i][j]=x;
             }
        }
                
        
        System.out.println("Satis tablonuz");
        for (i = 0; i < s; i++) {
            for (j = 0; j < 100; j++) {
                System.out.print(satisTablosu[i][j] + " ");
            }
            System.out.println();
        }
        
        
        
        for (i = 0; i < s; i++) {
            for (j = 0; j < 100; j++) {
                toplam=satisTablosu[i][j];
                for (int k = s; k > -1; k--) {
                if (toplam == k) {
                    System.out.println(j+" - ");   
                }
            }
            }
        }
        
        
        
    }
}