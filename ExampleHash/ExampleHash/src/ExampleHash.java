import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class ExampleHash {
    public static void main(String[] args) throws Exception {
        String input = "Donce";
        String hash = generateSHA256Hash(input);
        
        System.out.println("Input: " +input);
        System.out.println("SHA-256 Hash: " +hash);
    }

    public static String generateSHA256Hash(String input) {
        try {
            //Inizializza SHA-256
            MessageDigest digest = MessageDigest.getInstance("SHA-256");

            //Calcola il valore di hash
            byte[] hashBytes = digest.digest(input.getBytes());

            //Converti i byte in formato esadecimale
            StringBuilder hexString = new StringBuilder();
            for(byte b : hashBytes) {
                String hex  =Integer.toHexString(0xff & b);
                if(hex.length() == 1) hexString.append('0');
                hexString.append(hex);
            }

            return hexString.toString();
        } catch (NoSuchAlgorithmException e) {
            throw new RuntimeException();
        }
    }
}
