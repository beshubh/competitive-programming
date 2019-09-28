import java.util.Collection;
import java.util.LinkedHashSet;
import java.lang.Character;;

class Main {
    public static void main(String[] args) {
        String s = "aabcd";
        System.out.println(remove_duplicates(s));

    }

    private static String remove_duplicates(String str) {
        LinkedHashSet<Character> linkedHashSet = new LinkedHashSet<>();
        for (int i = 0; i < str.length(); i++) {
            linkedHashSet.add(str.charAt(i));
        }
        StringBuffer resultBuffer = new StringBuffer();
        for(Character s:linkedHashSet)
        {
            resultBuffer.append(s);
        }
        return resultBuffer.toString();
    }
}