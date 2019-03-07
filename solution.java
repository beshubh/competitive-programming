import java.util.ArrayList;
public class solution {
	
	private static ArrayList<String> permutation(String str){
        ArrayList<String> perms = new ArrayList<>();
        if(str.length() == 0){
            perms.add("");
            return perms;
        }
        char firstChar = str.charAt(0);
        String remString = str.substring(1);
        ArrayList<String> words = permutation(remString);
        for(String word: words){
            for( int i = 0; i <= word.length(); i++){
                String prefix = word.substring(0,i);
                String sufix = word.substring(i);
                perms.add(prefix + firstChar + sufix);
            }
        }
        return perms;
    }
    public static void permutations(String input){
            ArrayList<String> perms = permutation(input);
            for(String p: perms){
                System.out.println(p);
            }
        }
}
