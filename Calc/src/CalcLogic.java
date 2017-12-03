/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author johnvecchio
 */
public class CalcLogic {
    private int Total;

    public CalcLogic() {
        Total = 0;
    }

    public String getTotalString() {
        return "" + Total;
    }

    public void setTotal(String n) {
        Total = convertToNumber(n);
    }

    public void add(String n) {
        Total += convertToNumber(n);
    }

    public void subtract(String n) {
        Total -= convertToNumber(n);
    }

    public void multiply(String n) {
        Total *= convertToNumber(n);
    }

    public void divide(String n) {
        Total /= convertToNumber(n);
    }

    private int convertToNumber(String n) {
        return Integer.parseInt(n);
    }
}