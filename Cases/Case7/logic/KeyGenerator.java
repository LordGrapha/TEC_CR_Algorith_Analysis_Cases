package logic;

import model.HyperCube;
import utils.utils;

import java.util.ArrayList;
import java.util.HashMap;

public class KeyGenerator {

    private HyperCube cube;
    private ArrayList<Character> result;
    private ArrayList<Character> answer;
    private ArrayList<HashMap<Character, Double>> charTables;
    private final String chars;

    public KeyGenerator(HyperCube pData, ArrayList<Character> pAnswer){
        this.cube = pData;
        this.result = new ArrayList<Character>();
        this.answer = new ArrayList<Character>();
        this.chars = "12ABFK ";
        this.charTables = new ArrayList<HashMap<Character, Double>>();
        for(int index = 0; index < 7; index++){
            HashMap<Character, Double> table = new HashMap<Character, Double>();
            table.put(this.chars.charAt(index), (double) (1/6));
            this.charTables.add(table);
        }
    }

    public void createKey(){
        //Choose StartPoint
        int startPoint = (int)((utils.getRandom()*100)%18);
        Node<Character> firstNode = this.cube.getGraph().getNodes().get(startPoint);
        double random = 0.0;
        double iniRange = 0.0;
        char currentChar = ' ';
        System.out.println("StartPoint: " + firstNode.toString());
        //Lanza random en tabla para elegir los caracteres
        for(int index = 0; index < 6; index++){
            HashMap<Character, Double> table = this.charTables.get(index);
            random = utils.getRandom();

            currentChar = this.chars.charAt(character);
            if(utils.inRange(iniRange, (iniRange + table.get(currentChar).doubleValue()), random)){
                this.result.add(currentChar);
                if(this.answer.get(index).charValue() == currentChar){
                    this.balanceProbability(currentChar, index, true);
                }
                else{
                    this.balanceProbability(currentChar, index, false);
                }
                
            }
            
            
        }
        //chequea la respuesta y reajusta la dist. probabilistica para el siguiente tanteo.
    }

    private void balanceProbability(char pChar, int tableIndex, boolean pSuccess){
        if(pSuccess){       //This will add probability to the char in the table.

        }
        else{               //This will decrease probability to the char in the table.

        }
    }
    
}
