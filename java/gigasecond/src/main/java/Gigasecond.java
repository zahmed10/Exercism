import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.Month;

public class Gigasecond {
    private LocalDate time;
    private LocalDateTime tempTime;
    private LocalDateTime dateTime;

    public Gigasecond(LocalDate moment) {
        time = moment;
        System.out.println(moment);
        
    }

    public Gigasecond(LocalDateTime moment) {
        tempTime = time.atStartOfDay();
        dateTime = tempTime.plusSeconds(1000000000);
    }

    public LocalDateTime getDateTime() {
        return dateTime;
    }
}
