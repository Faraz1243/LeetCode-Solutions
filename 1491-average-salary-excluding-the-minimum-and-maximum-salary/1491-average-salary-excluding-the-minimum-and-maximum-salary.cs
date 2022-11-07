public class Solution {
    public double Average(int[] salary) {
        double sum = salary[0];
        double min=salary[0], max=salary[0];
        for(int i=1; i<salary.Count(); i++){
            if(salary[i]>max){
                max=salary[i];
            }
            if(salary[i]<min){
                min = salary[i];
            }
            sum += salary[i];
        }
        sum-=max;
        sum-=min;
        return (sum/(salary.Count()-2));
    }
}