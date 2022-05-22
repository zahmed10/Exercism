// Code is ahmeed83's community solution for this exercise
// https://exercism.org/tracks/java/exercises/hamming/solutions/ahmeed83

public class Hamming {

    int count = 0;

    public Hamming(String leftStrand, String rightStrand) {

        validate(leftStrand, rightStrand);

        if (rightStrand.isBlank() && leftStrand.isBlank()) {

            count = 0;

        } else {

            calculate(leftStrand, rightStrand);

        }

    }

    int getHammingDistance() {

        return count;

    }

    private void calculate(final String leftStrand, final String rightStrand) {

        for (int i = 0; i < leftStrand.length(); i++) {

            if (rightStrand.charAt(i) != leftStrand.charAt(i)) {

                count++;

            }

        }

    }

    private void validate(final String leftStrand, final String rightStrand) {

        if (leftStrand.isBlank() && !rightStrand.isBlank()) {

            throw new IllegalArgumentException("left strand must not be empty.");

        }

        if (rightStrand.isBlank() && !leftStrand.isBlank()) {

            throw new IllegalArgumentException("right strand must not be empty.");

        }

        if (leftStrand.length() != rightStrand.length()) {

            throw new IllegalArgumentException("leftStrand and rightStrand must be of equal length.");

        }

    }

}