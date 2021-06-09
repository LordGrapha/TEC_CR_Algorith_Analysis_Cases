package model;

public class Percentage{
    public double iniRange;
    public double endRange;

    public Percentage(double pIniRange, double pEndRange){
        this.iniRange = pIniRange;
        this.endRange = pEndRange;
    }

    @Override
    public String toString(){
        return "Percentage{ iniRange:" + this.iniRange + ", endRange: "
                + this.endRange + " }" ; 
    }

}
