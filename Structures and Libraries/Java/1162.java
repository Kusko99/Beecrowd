import java.util.Scanner;
public class Bee1162 {
    public static void main(String[] args) {
        Scanner Scanner = new Scanner(System.in);
        int testes = Scanner.nextInt();
        int trocas = 0;
        for(int i = 1; i <= testes; i++){
            int tamanhoTrem = Scanner.nextInt();
            int trem[] = new int[tamanhoTrem];
            for(int j = 0; j <= tamanhoTrem-1; j++){
                trem[j] = Scanner.nextInt();
            } 
            for(int k = 0; k < tamanhoTrem-1; k++){
                for(int l = 0; l < tamanhoTrem-1-k; l++){
                    if(trem[l] > trem[l+1]){
                        int aux = trem[l];
                        trem[l] = trem[l+1];
                        trem[l+1] = aux;
                        trocas++;
                    } 
                }
            }     
            System.out.println("Optimal train swapping takes " + trocas + " swaps.");
            trocas = 0;
        }
        Scanner.close();
    }
   
}
