package program;

import model.HyperCube;
import logic.KeyGenerator;

class App {
    public static void main(String[] args) {
        System.out.println("Case 7\nLuis Diego Mora Aguilar.\n2018147110\n\n"); 
        HyperCube data = new HyperCube();
        System.out.println("Total Nodes should be 27 and we have: " + data.getGraph().getNodes().size());
        System.out.println("Total Arcs should be 108 and we have: " + data.getGraph().getArcs().size());
        //KeyGenerator generator = new KeyGenerator(data);
        //generator.createKey();
    }

}