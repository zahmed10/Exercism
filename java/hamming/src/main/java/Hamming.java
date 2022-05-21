public class Hamming {

    private int hammingDistance;

    Hamming(){
        hammingDistance = 0;
    }

    public Hamming(String leftStrand, String rightStrand) throws Exception {
        int mismatches = 0;
        try {
            if (leftStrand.length()!=rightStrand.length()){
                throw new Exception();
            } else {
                for (int i =0; i < leftStrand.length(); i++){
                    if (leftStrand.charAt(i) != rightStrand.charAt(i)) {
                        mismatches++;
    
                    }
                    
                }
            }
            
        } catch (Exception e) {
            System.out.println("The two strand lengths do not match");
        }
        
        this.hammingDistance = mismatches;
    }

    public int getHammingDistance() {
        return hammingDistance;
    }
}
