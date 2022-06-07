import java.util.List;

class HandshakeCalculator {

    List<Signal> calculateHandshake(int number) {
        List remainders = new List();
        while (number!=0){
            remainders.add(number%2);
            number = number/2;
        }
        List signalsBin = new List();
        for (int i=remainders.size() - 1; i>=0; i--){
            signals.add(remainders.get(i));
        }
        
        
    }

}
