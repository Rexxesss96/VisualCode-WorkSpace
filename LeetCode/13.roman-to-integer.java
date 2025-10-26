/*
 * @lc app=leetcode id=13 lang=java
 *
 * [13] Roman to Integer
 */

// @lc code=start

import java.util.HashMap;

class Solution {
    public int romanToInt(String s) {

        int totale = 0;
        for (int i = 0; i < s.length(); i++) {
            int corrente = valore(s.charAt(i));
            if (i < s.length() - 1 && corrente < valore(s.charAt(i + 1))) {
                totale -= corrente;
            } else {
                totale += corrente;
            }
        }
        return totale;

    }

    private int valore(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }

    /*
     * public int romanToInt(String s) {
     * int totale = 0;
     * 
     * // Creiamo la mappa dei simboli romani
     * HashMap<Character, Integer> mappa = new HashMap<>();
     * mappa.put('I', 1);
     * mappa.put('V', 5);
     * mappa.put('X', 10);
     * mappa.put('L', 50);
     * mappa.put('C', 100);
     * mappa.put('D', 500);
     * mappa.put('M', 1000);
     * 
     * // Ciclo sui simboli
     * for (int i = 0; i < s.length(); i++) {
     * int curr = mappa.get(s.charAt(i));
     * // Se esiste il simbolo successivo e il corrente è minore, sottrai
     * if (i < s.length() - 1 && curr < mappa.get(s.charAt(i + 1))) {
     * totale -= curr;
     * } else {
     * totale += curr;
     * }
     * }
     * 
     * return totale;
     * }
     */

}
// @lc code=end
