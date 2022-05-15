public class SalaryCalculator {
    public double multiplierPerDaysSkipped(int daysSkipped) {
        boolean expr = daysSkipped>5;
        double value = expr ? 0.85:1;
        return value;
    }

    public int multiplierPerProductsSold(int productsSold) {
        boolean expr = productsSold>20;
        int value = expr?13:10;
        return value;
    }

    public double bonusForProductSold(int productsSold) {
        return productsSold * multiplierPerProductsSold(productsSold);
    }

    public double finalSalary(int daysSkipped, int productsSold) {
        double total = 1000*multiplierPerDaysSkipped(daysSkipped)+bonusForProductSold(productsSold);
        boolean expr = total<=2000;
        double value = expr ?total:2000;
        return value;
    } 
}
