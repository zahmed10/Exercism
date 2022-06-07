class Scrabble {

    private int score;
    private String word;

    Scrabble(String word) {
        this.score = 0;
        this.word=word;
        
    }

    private void calculateScore(){
        this.word = this.word.toLowerCase();
        for (int i=0; i<this.word.length(); i++){
            char currentLetter=this.word.charAt(i); //figure out a way to make everything lowercase
            switch(currentLetter) {
                case 'a':
                    this.score+=1;
                    break;
                case 'e':
                    this.score+=1;
                    break;
                case 'i':
                    this.score+=1;
                    break;
                case 'o':
                    this.score+=1;
                    break;
                case 'u':
                    this.score+=1;
                    break;
                case 'l':
                    this.score+=1;
                    break;
                case 'n':
                    this.score+=1;
                    break;
                case 'r':
                    this.score+=1;
                    break;
                case 's':
                    this.score+=1;
                    break;
                case 't':
                    this.score+=1;
                    break;
                case 'd':
                    this.score+=2;
                    break;
                case 'g':
                    this.score+=2;
                    break;
                case 'b':
                    this.score+=3;
                    break;
                case 'c':
                    this.score+=3;
                    break;
                case 'm':
                    this.score+=3;
                    break;
                case 'p':
                    this.score+=3;
                    break;
                case 'f':
                    this.score+=4;
                    break;
                case 'h':
                    this.score+=4;
                    break;
                case 'v':
                    this.score+=4;
                    break;
                case 'w':
                    this.score+=4;
                    break;
                case 'y':
                    this.score+=4;
                    break;
                case 'k':
                    this.score+=5;
                    break;
                case 'j':
                    this.score+=8;
                    break;
                case 'x':
                    this.score+=8;
                    break;     
                case 'q':
                    this.score+=10;
                    break;
                case 'z':
                    this.score+=10;
                    break;
                default:
                    break;
                    
                    
            }
            }
    }

    int getScore() {
        calculateScore();
        return this.score;
    }

}
